# Modele de projet 

- Langage C
- Chaine de compilation cmake 

## Branche master

Contient un squelette de projet à intégrer à Qt

## Branche TestsUnitaire

Contient un squelette de projet avec un test unitaire fonctionnel

## Intégration à l'IDE QT

- Cloner le projet 

```bash
git clone https://gitlab.sn-kastler.fr/modeles/cmake_mod.git
```

- Renommer le dossier <VOTRE_NOM>_ASCII_ART (Exemple PROUFF_ASCII_ART)
  - Ouvrir le fichier CmakeLists.txt
  - Modifier les lignes de ce fichier

```
project(CMAKE_mod LANGUAGES C CXX)
add_executable(CMAKE_mod main.c)
```

- Mettre le nom de votre projet à la place de CMAKE_mod

<u>Exemple</u>

```
project(PROUFF_ASCII_ART LANGUAGES C CXX)
add_executable(PROUFF_ASCII_ART main.c)
```

- Ouvrir le projet dans QtCreator

## Sauvegarder le projet sur votre dépôt

- Modifier l'url du dépot

```
git remote set-url origin https://gitlab.sn-kastler.fr/<votre_nom>/<votre_depot>.git
```

- Commiter votre code

```
git commit -am "Votre super message"
```

- Pousser votre code sur le dépôt

```
git push -u origin master
```

