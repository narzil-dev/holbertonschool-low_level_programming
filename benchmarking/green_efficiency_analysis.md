
# Measurement Methodology

Cette expérimentation a été réalisée dans le cadre d'un projet Holberton School portant sur la Green Tech. Les trois expérimentations ont été effectuées dans les mêmes conditions, au sein d'un conteneur Ubuntu exécuté sur un MacBook personnel.

La première consistait à exécuter trois fois le même programme afin d'observer les variations du temps d'exécution. La deuxième avait pour objectif de comparer les performances de deux algorithmes utilisant le même jeu de données. Enfin, lors de la troisième, nous avons utilisé la fonction `clock()` pour mesurer séparément les différentes phases d'exécution d'un programme.

# Observed Performance Differences

Lors de la première expérimentation, avec un programme de référence et dans un environnement identique, nous avons constaté que les temps d'exécution variaient légèrement. Les temps relevés étaient de 0,241105, 0,240063 et 0,260452 seconde. On se rend donc compte que les mesures ne sont pas exactement les mêmes, même lorsque tout est mis en place pour qu'elles le soient.

La deuxième expérimentation a servi à comparer deux algorithmes : un parcours unique et des boucles imbriquées. Nous avons constaté une véritable différence, avec un temps moyen de 2,615428 secondes pour les boucles imbriquées, contre 0,000101 seconde pour le parcours unique. Celui-ci était beaucoup plus rapide puisqu'il n'avait pas besoin de repasser plusieurs fois sur les données. Cela montre que la manière dont on écrit et structure le code a une importance considérable sur les performances. Il faut néanmoins noter que les deux algorithmes ne produisaient pas le même résultat numérique.

Enfin, lors de la troisième expérimentation, nous avons pu découper le temps d'exécution en plusieurs phases : 0,000654 seconde pour BUILD_DATA, 0,000544 seconde pour PROCESS et 0,000288 seconde pour REDUCE, soit un temps total de 0,001486 seconde. Placer des marqueurs à différentes étapes du code peut être particulièrement intéressant sur des projets de plus grande envergure, puisqu'ils permettent de mesurer le temps CPU utilisé par les différents blocs.

# Relation Between Runtime and Energy Consumption

Ces trois expérimentations nous permettent de constater que le temps CPU peut avoir un impact sur la consommation énergétique liée à l'informatique. Lors de la deuxième expérimentation, les boucles imbriquées avaient un temps CPU moyen significativement supérieur à celui du parcours unique.

Cela invite chaque développeur à se responsabiliser vis-à-vis des travaux qu'il produit et à prendre en compte cette dimension énergétique dans ses futurs projets. Toutefois, un temps CPU inférieur ne prouve pas à lui seul une consommation électrique plus faible.

# Limitations of the Experiment

Si les expérimentations apportent une vision intéressante sur l'efficacité des solutions digitales, il faut rester prudent vis-à-vis des conclusions tirées : même dans un environnement identique, les résultats peuvent différer.

De plus, le faible nombre d'exécutions représente un échantillon trop limité pour tirer des conclusions définitives. Le temps CPU mesuré n'a pas été directement comparé à la consommation énergétique lors des tests.

# Practical Engineering Takeaway

En conclusion, ces trois expériences ont été particulièrement intéressantes et riches en enseignements, chacune à son échelle.

La dernière tâche m'a permis de comprendre qu'il était possible d'identifier des pistes d'optimisation en mesurant le temps CPU utilisé par les différentes parties de mon code. J'ai également trouvé intéressant le fait que, sans changement du programme ni variation volontaire de l'environnement, les résultats n'étaient pas exactement les mêmes.

Surtout, ces expériences me poussent davantage à rechercher l'optimisation, puisque la manière dont on pense et construit notre code peut avoir un impact sur son efficacité et sa rapidité d'exécution, mais aussi potentiellement sur l'environnement.

L'idée est donc de prendre du recul sur nos productions, de chercher continuellement à apprendre et à améliorer notre travail, pour devenir des développeurs plus réfléchis et plus concernés par les conséquences de nos projets.
