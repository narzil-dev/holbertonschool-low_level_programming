
# C - Variadic functions

## Présentation

Ce projet fait partie de la formation Kickstart de Holberton School.

Il porte sur les fonctions variadiques en langage C, c'est-à-dire les fonctions capables de recevoir un nombre variable d'arguments.

## Objectifs pédagogiques

À la fin du projet, nous devons être capables d'expliquer :

- Ce qu'est une fonction variadique.
- Comment utiliser les macros `va_start`, `va_arg` et `va_end`.
- Pourquoi et comment utiliser le qualificatif `const`.

## Environnement et compilation

- Système : Ubuntu 20.04 LTS.
- Compilateur : GCC.
- Options : `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Style de code : Betty.
- Éditeurs autorisés : `vi`, `vim`, `emacs`.

## Fichiers du projet

### variadic_functions.h

Fichier d'en-tête contenant les prototypes des fonctions du projet et de `_putchar`.

Il possède des gardes d'inclusion.

### 0-sum_them_all.c

Fonction `sum_them_all`.

Retourne la somme de tous les entiers transmis après le paramètre `n`.

Retourne `0` lorsque `n` vaut `0`.

### 1-print_numbers.c

Fonction `print_numbers`.

Affiche un nombre variable d'entiers en utilisant un séparateur facultatif.

L'affichage se termine par un retour à la ligne.

### 2-print_strings.c

Fonction `print_strings`.

Affiche un nombre variable de chaînes de caractères.

Le séparateur est facultatif. Une chaîne NULL est représentée par `(nil)`.

L'affichage se termine par un retour à la ligne.

### 3-print_all.c

Fonction `print_all`.

Affiche des arguments de différents types selon une chaîne de format.

Types reconnus :
- `c` : caractère.
- `i` : entier.
- `f` : nombre flottant.
- `s` : chaîne de caractères.

Les autres caractères de format sont ignorés.

Cette tâche impose des restrictions supplémentaires sur les structures de contrôle et les variables.

## Contraintes générales

- Ne pas utiliser de variables globales.
- Ne pas dépasser cinq fonctions par fichier.
- Respecter les règles de style et de documentation Betty.
- Terminer tous les fichiers par une nouvelle ligne.
- Utiliser les prototypes officiels dans `variadic_functions.h`.
- Protéger les fichiers d'en-tête contre les inclusions multiples.

Les seules fonctions de la bibliothèque standard autorisées par les consignes générales sont `malloc`, `free` et `exit`.

Les macros variadiques autorisées sont :
- `va_start`
- `va_arg`
- `va_end`

La fonction `_putchar` est autorisée.

Les tâches 1, 2 et 3 autorisent explicitement `printf` comme exception à la règle générale.

## Particularités de la tâche 3

Les éléments suivants sont interdits :
- Boucle `for`.
- Instruction `goto`.
- Opérateur ternaire.
- Instruction `else`.
- Boucle `do ... while`.

Limites :
- Deux boucles `while` au maximum.
- Deux instructions `if` au maximum.
- Neuf variables au maximum.

## Organisation du dépôt

Dépôt : `holbertonschool-low_level_programming`

Répertoire : `variadic_functions`

Les fichiers `main.c` présentés dans les exemples Holberton sont des fichiers de test et ne sont pas requis pour la soumission.

## Ressources

- https://en.wikipedia.org/wiki/Stdarg.h
- https://sourceware.org/glibc/manual/
