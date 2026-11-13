# Calculatrice simple

## Description
Calculatrice interactive en langage C, utilisable dans un terminal.

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Exécution
```bash
./calculator
```

## Opérations disponibles
- Addition
- Soustraction
- Multiplication
- Division

## Comportement numérique
À compléter : choix des entiers ou des nombres décimaux et format d'affichage des résultats.

## Limitations connues
- Les options du menu doivent être des entiers compris entre 0 et 4.
- Les saisies non numériques ne sont pas prises en charge dans les tâches obligatoires.
- La division par zéro doit être détectée et signalée.
