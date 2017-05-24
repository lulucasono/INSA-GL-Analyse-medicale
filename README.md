# Projet Génie Logiciel - Analyse médicale

[![license](https://img.shields.io/github/license/Embraser01/INSA-GL-Analyse-medicale.svg)](./LICENSE.md)
[![build](https://api.travis-ci.org/Embraser01/INSA-GL-Analyse-medicale.svg?branch=prod)](https://travis-ci.org/Embraser01/INSA-GL-Analyse-medicale)

## Presentation
  Ceci est un projet fait en Génie Logiciel 3IF à l'INSA de Lyon. Le sujet est disponible [ici](./doc/sujet.pdf)
  Auteurs :
*    Marc-Antoine FERNANDES
*    Julia LU DAC
*    Lucas ONO
*    Tianhao WU
*    Ye YUAN

## Utiliser l'application

### Serveur

### Client

## Contribuer

### Dépendance

* [cmake 3.7+](https://cmake.org/)

### Configurer l'environnement

Le projet utilise cmake. Cela permet d'être compatible avec CLion, 
Code Blocks mais également Visual Studio.

#### Visual Studio

> Visual Studio 15 (2017) Supporte cmake nativement !

Pour les anciennes versions de VS, cmake permet de générer les fichiers de configuration :
```bash
mkdir _cmake_vs_build
cd _cmake_vs_build/
cmake .. -G "Visual Studio 14 Win64"
```

Après ça, des fichiers de solutions Visual Studio devraient être créés

#### CLion

CLion prend en charge nativement les projets cmake,
donc il suffit de cloner le repo et ouvrir le projet.


### Lancer les tests unitaires

Les tests unitaires sont déjà configurés dans le `CMakeLists.txt`.

## Licence

[Copyright (C) 2017  Marc-Antoine FERNANDES, 
Julia LU DAC, Lucas ONO, Tianhao WU, Ye YUAN](./LICENSE.md)
