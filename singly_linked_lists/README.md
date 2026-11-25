# C - Singly linked lists

## Présentation

Ce projet Holberton School porte sur les listes simplement chaînées (singly linked lists) en langage C.

Il permet de découvrir une structure de données composée de nœuds reliés entre eux par des pointeurs.

## Objectifs pédagogiques

- Comprendre ce qu'est une structure de données.
- Identifier les différences entre les tableaux et les listes chaînées.
- Savoir quand et pourquoi utiliser une liste chaînée.
- Comprendre les notions de nœud, de tête et de fin de liste.
- Parcourir une liste simplement chaînée.
- Ajouter des nœuds au début et à la fin d'une liste.
- Gérer l'allocation et la libération dynamique de mémoire.

## Structure utilisée

La structure `list_t`, définie dans `lists.h`, contient :

- `str` : pointeur vers une chaîne de caractères.
- `len` : longueur de la chaîne.
- `next` : pointeur vers le nœud suivant.

## Fichiers du projet

| Fichier | Rôle |
| --- | --- |
| `lists.h` | Structure et prototypes des fonctions |
| `0-print_list.c` | Affichage des éléments et comptage des nœuds |
| `1-list_len.c` | Comptage des nœuds |
| `2-add_node.c` | Ajout d'un nœud en tête de liste |
| `3-add_node_end.c` | Ajout d'un nœud en fin de liste |
| `4-free_list.c` | Libération de la mémoire de la liste |

## Contraintes du projet

- Compilation sur Ubuntu 20.04 LTS avec GCC.
- Options : `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Respect du style Betty.
- Aucune variable globale.
- Maximum de cinq fonctions par fichier.
- Fonctions standard autorisées : `malloc`, `free` et `exit`.
- Exceptions : `printf` pour la tâche 0 et `strdup` pour les tâches 2 et 3.
- Protection contre les inclusions multiples dans les fichiers d'en-tête.
- Chaque fichier doit se terminer par un retour à la ligne.

## Validation

Les fonctions sont destinées à être compilées avec les fichiers `main.c` fournis par les tests Holberton.

La tâche de libération de mémoire peut notamment être vérifiée avec Valgrind.

## Dépôt

- Dépôt : `holbertonschool-low_level_programming`
- Répertoire : `singly_linked_lists`
