
# C - argc, argv

## Description

Ce projet Holberton School permet d'apprendre à utiliser les arguments transmis à un programme C depuis la ligne de commande.

Il aborde notamment :
- Le rôle de `argc` et `argv`.
- Les différentes déclarations de la fonction `main`.
- L'accès aux arguments et leur parcours.
- La conversion de chaînes de caractères en nombres.
- La vérification des arguments reçus.
- La gestion des paramètres inutilisés.

## Objectifs pédagogiques

- Comprendre comment transmettre des arguments à un programme.
- Savoir compter et consulter les arguments reçus.
- Manipuler les arguments sous forme de chaînes de caractères.
- Utiliser les arguments pour effectuer des opérations.
- Gérer les erreurs liées aux arguments.
- Comprendre l'utilisation de `(void)` et de `__attribute__((unused))`.

## Fichiers

| Fichier | Description |
|---|---|
| `0-whatsmyname.c` | Affiche le nom utilisé pour lancer le programme. |
| `1-args.c` | Affiche le nombre d'arguments transmis, sans compter le nom du programme. |
| `2-args.c` | Affiche tous les arguments reçus, un par ligne. |
| `3-mul.c` | Multiplie deux nombres transmis en arguments. |
| `4-add.c` | Additionne des nombres positifs transmis en arguments. |
| `main.h` | Contient les déclarations communes requises par le projet. |

## Compilation

Les programmes sont compilés sous Ubuntu 20.04 LTS avec GCC et les options suivantes :

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

## Contraintes

- Respecter le style et la documentation Betty.
- Terminer chaque fichier par un retour à la ligne.
- Ne pas utiliser de variables globales.
- Ne pas dépasser cinq fonctions par fichier.
- Utiliser les fonctions de la bibliothèque standard lorsque nécessaire.

## Environnement

- Langage : C
- Système : Ubuntu 20.04 LTS
- Compilateur : GCC
- Dépôt : holbertonschool-low_level_programming
- Répertoire : argc_argv
