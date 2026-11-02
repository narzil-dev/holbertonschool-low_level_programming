
# Comparaison des performances

## Temps d'exécution

| Exécution | Naive (s) | Single-pass (s) |
|---|---:|---:|
| 1 | 2.581087 | 0.000101 |
| 2 | 2.593062 | 0.000101 |
| 3 | 2.672135 | 0.000100 |

## Temps moyens

- Naive : (2.581087 + 2.593062 + 2.672135) / 3 = **2.615428 s**
- Single-pass : (0.000101 + 0.000101 + 0.000100) / 3 = **0.000100667 s**

## Différence relative

2.615428 / 0.000100667 ≈ **25 981**

L'algorithme Naive a nécessité environ 25 981 fois plus de temps CPU que Single-pass.
