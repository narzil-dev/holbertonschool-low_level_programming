# AI Memory Visualizer

## 1. Analyse de `stack_example.c`

### Objectif du programme

Ce programme permet d'observer le fonctionnement de la Stack pendant plusieurs appels de fonctions.

La fonction `main()` lance `walk_stack()`, qui s'appelle elle-même jusqu'à atteindre la profondeur 3.

Chaque appel possède ses propres variables locales, notamment `marker`, dont la valeur dépend de la profondeur.

La fonction `dump_frame()` permet d'observer les valeurs et les adresses mémoire de plusieurs variables locales.

### Observations

- Les appels de `walk_stack()` s'empilent aux profondeurs 0, 1, 2 et 3.
- Chaque appel conserve ses variables locales tant qu'il n'est pas terminé.
- Les appels se terminent dans l'ordre inverse : 3, 2, 1, puis 0.
- Les variables locales de `dump_frame()` cessent d'exister à la fin de chaque appel.
- Le programme n'effectue aucune allocation dynamique avec `malloc()`.

Ces observations correspondent au fonctionnement de la Stack et au principe LIFO (*Last In, First Out*).


### Memory Map 1 : premier appel

État de la mémoire pendant `dump_frame("enter", 0)` :

```text
STACK
┌────────────────────────────┐
│ dump_frame("enter", 0)     │
│ local_int = 100            │
│ local_buf = "A"            │
│ p_local → local_int        │
├────────────────────────────┤
│ walk_stack(0, 3)           │
│ marker = 0                 │
├────────────────────────────┤
│ main()                     │
└────────────────────────────┘

HEAP : aucune allocation dynamique.
```

Les trois fonctions sont actives. Après le retour de `dump_frame()`, ses variables locales cessent d'exister, mais `walk_stack()` continue.

### Memory Map 2 : profondeur maximale

État de la mémoire pendant `dump_frame("enter", 3)` :

```text
STACK
┌────────────────────────────┐
│ dump_frame("enter", 3)     │
│ local_int = 103            │
│ local_buf = "D"            │
│ p_local → local_int        │
├────────────────────────────┤
│ walk_stack(3, 3)           │
│ marker = 30                │
├────────────────────────────┤
│ walk_stack(2, 3)           │
│ marker = 20                │
├────────────────────────────┤
│ walk_stack(1, 3)           │
│ marker = 10                │
├────────────────────────────┤
│ walk_stack(0, 3)           │
│ marker = 0                 │
├────────────────────────────┤
│ main()                     │
└────────────────────────────┘

HEAP : aucune allocation dynamique.
```

Chaque appel de `walk_stack()` possède son propre `marker`. Les quatre appels restent actifs pendant que `dump_frame("enter", 3)` s'exécute.

### Memory Map 3 : retour des appels

```text
dump_frame("exit", 3) → fin
walk_stack(3, 3)      → fin

dump_frame("exit", 2) → fin
walk_stack(2, 3)      → fin

dump_frame("exit", 1) → fin
walk_stack(1, 3)      → fin

dump_frame("exit", 0) → fin
walk_stack(0, 3)      → fin

main() reprend, puis se termine.
```

Chaque appel à `dump_frame("exit", depth)` crée de nouvelles variables locales, qui cessent d'exister au retour de la fonction.

Les appels de `walk_stack()` se terminent ensuite dans l'ordre inverse de leur création.

### Vérification critique de l'IA

Dans sa première représentation de la troisième carte, l'IA avait omis les appels à `dump_frame("exit", depth)`.

Cette omission donnait une représentation incomplète de l'exécution : chaque appel de `walk_stack()` appelle `dump_frame()` une deuxième fois avant de se terminer.

La carte a été corrigée en ajoutant ces appels temporaires.

De plus, les adresses identiques de `local_int` affichées à l'entrée et à la sortie d'une même profondeur ne signifient pas que cette variable a survécu entre les deux appels. Il s'agit de deux variables locales distinctes dont l'emplacement mémoire a été réutilisé lors de cette exécution.

## 2. Analyse de `aliasing_example.c`

### Objectif

Ce programme montre comment deux pointeurs peuvent désigner le même tableau (*aliasing*) et pourquoi son utilisation après `free()` est dangereuse (*use-after-free*).

### Memory Maps générées par l'IA

**1. Allocation avec `malloc()`**

```text
STACK                          HEAP
make_numbers()
  arr ──────────────────────► [0, 11, 22, 33, 44]

main()
  a = NULL
  b = NULL
  n = 5
```

`make_numbers()` renvoie l'adresse du tableau à `main()`. Ses variables locales disparaissent, mais le tableau reste alloué.

**2. Aliasing après `b = a`**

```text
STACK                          HEAP
main()
  a ─────────────┐
                 ├──────────► [0, 11, 22, 33, 44]
  b ─────────────┘
```

`a` et `b` désignent le même tableau. Les deux permettent de lire `22` à l'indice 2.

**3. Après `free(a)`**

```text
STACK                          HEAP
main()
  a : pointeur pendant         [BLOC LIBÉRÉ]
  b : pointeur pendant
```

Le tableau n'est plus valide. Les variables `a` et `b` existent toujours, mais elles ne permettent plus d'accéder à ce tableau.

**4. Accès après libération**

```text
b[2]        → Lecture invalide
b[3] = 1234 → Écriture invalide

HEAP : ancien tableau déjà libéré
```

Ces deux opérations sont des *use-after-free* et provoquent un comportement indéfini.

### Résultat observé

```text
a[2]=22 b[2]=22
reading b[2]=-385875952
wrote b[3]=1234
```

La valeur négative a été observée lors de notre exécution, mais elle n'est pas fiable. Le programme continue sans planter, ce qui ne signifie pas que les accès sont valides.

### Critique et correction de l'IA

**Erreur de précision :** dans sa première représentation, l'IA affirmait qu'après `free(a)`, les pointeurs conservaient leur ancienne adresse.

Cette affirmation était trop catégorique : après la libération, les valeurs des pointeurs qui désignaient le bloc deviennent indéterminées selon les règles du C.

**Correction :** les cartes représentent désormais `a` et `b` comme des pointeurs pendants, et le tableau comme un bloc libéré. Les anciennes adresses ne doivent pas être considérées comme utilisables.

### Conclusion

`a` et `b` désignent un seul tableau dans la Heap. Lorsque ce tableau est libéré, aucun des deux pointeurs ne permet plus d'y accéder valablement.