# Héritage en C++ avec Tests Unitaires

Ce projet explore les concepts d'héritage en C++ à travers la modélisation d'objets géométriques (`objet2D`, `rectangle`, et `carre`) et leur extension avec des méthodes pour calculer des propriétés géométriques telles que le périmètre et l'aire. 
Il inclut également des tests unitaires pour valider le comportement des classes.

## Structure du projet

- **Classes principales :**
  - `objet2D` : Classe de base abstraite.
  - `rectangle` : Hérite de `objet2D` et implémente les méthodes spécifiques au rectangle.
  - `carre` : Hérite de `rectangle` et implémente des méthodes supplémentaires pour gérer les carrés.

- **Tests unitaires :**
  Les tests unitaires sont implémentés avec le framework `Google Test`.

## Fichiers

- `objet2D.h` : Définition de la classe de base.
- `objet2D.cpp` : Implémentation des méthodes de la classe `objet2D`.
- `rectangle.h` : Définition de la classe `rectangle`.
- `rectangle.cpp` : Implémentation des méthodes de la classe `rectangle`.
- `carre.h` : Définition de la classe `carre`.
- `carre.cpp` : Implémentation des méthodes de la classe `carre`.
- `test.cpp` : Fichier contenant les tests unitaires pour valider le projet.

## Prérequis

- Un compilateur supportant C++11 ou une version ultérieure.
- [Google Test](https://github.com/google/googletest) pour exécuter les tests unitaires.

## Installation

1. Clonez ce dépôt :
   ```
   git clone https://github.com/gbencheikh/Heritage.git
   cd Heritage
   ```
2. Configurez Google Test (si ce n'est pas déjà fait). 
3. Compilez le projet :
  ```
  g++ -std=c++11 objet2D.cpp rectangle.cpp carre.cpp test_carre.cpp -lgtest -lgtest_main -pthread -o test_carre
  ```

Les tests suivants sont inclus :

Classe rectangle :
Calcul correct du périmètre et de l'aire.
Vérification des dimensions.

Classe carre :
Héritage du comportement de la classe rectangle.
Validation des méthodes spécifiques.

3. Exécutez le fichier binaire généré :
  ```
  ./test_carre
  ```

Exemple de sortie attendue :
```
[==========] Running 7 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 7 tests from RectangleTest
[ RUN      ] RectangleTest.DefaultConstructor
[       OK ] RectangleTest.DefaultConstructor (0 ms)
[ RUN      ] RectangleTest.ParameterizedConstructor
[       OK ] RectangleTest.ParameterizedConstructor (0 ms)
[ RUN      ] RectangleTest.GetLongueur
[       OK ] RectangleTest.GetLongueur (0 ms)
[ RUN      ] RectangleTest.GetLargeur
[       OK ] RectangleTest.GetLargeur (0 ms)
[ RUN      ] RectangleTest.GetPerimetre
[       OK ] RectangleTest.GetPerimetre (0 ms)
[ RUN      ] RectangleTest.GetAire
[       OK ] RectangleTest.GetAire (0 ms)
[ RUN      ] RectangleTest.ToString
[       OK ] RectangleTest.ToString (0 ms)
[----------] 7 tests from RectangleTest (0 ms total)

[----------] Global test environment tear-down
[==========] 7 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 7 tests.
```
