# Tabelle

- **Durée**: 4 périodes + travail à la maison

## Objectifs

Ce travail pratique a pour but de se familiariser avec les boucles imbriquées, les `printf` et la création d'un menu en ligne de commande.

Cette fois-ci nous n'allons pas utiliser les arguments, mais l'entrée standard `stdin`. L'interface utilisateur sera par conséquent interactive. 

Voici une simulation complète du programme que vous devez réaliser : 

```console
$ make
$ ./tabelle

Veuillez choisir une option :

  1. Table de multiplication
  2. Version
  0. Quitter

> 2

Version 0.1.0 Copyright(c) HEIG-VD T.Maulaz <tony.maulaz@heig-vd.ch>

Veuillez choisir une option :

  1. Table de multiplication
  2. Version
  0. Quitter

> 1

Livret le plus élevé ? (1..15) : 5

  X |  1 |  2 |  3 |  4 |  5
----+----+----+----+----+----
  1 |  1 |  2 |  3 |  4 |  5
----+----+----+----+----+----
  2 |  2 |  4 |  6 |  8 | 10
----+----+----+----+----+----
  3 |  3 |  6 |  9 | 12 | 15
----+----+----+----+----+----
  4 |  4 |  8 | 12 | 16 | 20
----+----+----+----+----+----
  5 |  5 | 10 | 15 | 20 | 25

Voulez-vous recommencer [y/n] ? : y

Livret le plus élevé ? (1..15) : 2

 X | 1 | 2 
---+---+---
 1 | 1 | 2 
---+---+---
 2 | 2 | 4 

Voulez-vous recommencer [y/n] ? : n

Veuillez choisir une option :

  1. Table de multiplication
  2. Version
  0. Quitter

> 0
```

## Cahier des charges

- Le **seul** moyen de quitter le programme est de choisir l'option `0`
- Le programme **doit** comporter un menu à plusieurs entrées.
- Le programme **doit** pouvoir afficher sa version.
- Une des options du menu **doit** permettre d'afficher les tables de multiplication.
- Chaque option du menu **doit** être placée dans une fonction C.
- L'utilisateur **doit** être invité à saisir le livret le plus élevé à afficher.
- L'affichage de la table de multiplication **doit** être identique à l'exemple ci-dessus.
- L'espacement entre les cases de la table **doit** être adapté selon les valeurs affichées.
- Une fois la table affichée, on demandera à l'utilisateur si il veut afficher une nouvelle table.
- L'utilisateur **doit** répondre par `y` ou `n` si il veut recommencer.
- Toutes les cases ont la même largeur.
- Le choix du livret est de 1 à 15.
- La ligne séparatrice est affichée par une fonction.

## Déroulement du travail

Séparez bien votre travail. Vous êtes libre dans votre démarche, mais voici quelques étapes possibles :

1. Le menu fonctionne.
2. La version fonctionne.
3. La saisie du livret le plus élevé fonctionne.
4. Le calcul du nombre de digits fonctionne.
5. L'affichage de la table de multiplication fonctionne.
6. L'utilisateur est invité à recommencer.
7. Correction de bugs.

## Détails

### Qualité du code

De plus en plus, la qualité du code est évaluée. Pour mémoire :

- les variables sont nommées de façon **appropriée** ;
- la **visibilité** (*scope*) des variables est minimum ;
- les **constantes littérales** sont nommées pour une meilleure compréhension ;
- les **types** de données doivent être appropriés au contenu ciblé ;
- le programme doit être **robuste**, les cas d'exception doivent être traités.

### Debug

N'oubliez pas que vous pouvez utiliser le `debug`, en appuyant sur `F5`, pour aller voir comment se déroule votre programme en pas par pas.

### Affichage

Il doit toujours y avoir `1` espace autour du nombre le plus grand.
Toutes les cases ont la même largeur.

Si le nombre le plus grand est avec `1` chiffre
```console
+---+---+
| 4 | 9 |
+---+---+
```

Si le nombre le plus grand est avec `4` chiffres

```console
+------+------+
| 1234 |    9 |
+------+------+
```

### Menu

L'un des objectifs de ce travail est de réaliser un menu interactif. Lorsque le programme sera exécuté, il affichera par exemple ceci sur `stdout` :

```console
Veuillez choisir une option :

  1. Option 1
  2. Option 2
  0. Quitter

>

```

Le caractère `>` est nommé *prompt*. C'est un invité de commande, c'est-à-dire un caractère qui vous invite à entrer une commande. À ce moment, le programme stoppe son exécution et attend que l'utilisateur saisisse quelque chose au clavier (en réalité, qu'une information soit écrite dans `stdin`).

L'implémentation du menu fait intervenir :

- une boucle ;
- l'instruction `switch` ;
- l'instruction `scanf` ou `getchar` ;
- l'appel de fonction spécialisée (affichage de la version, affichage de l'aide...)


### Fonctions

Chaque mode de fonctionnement du programme sera une fonction séparée et indépendante. Le prototype de ces fonctions sera le suivant :

```c
void table(void) {
    // ...
}

void version(void) {
    // ...
}
```

Vous **devez** faire une fonction pour afficher la ligne séparatrice
```console
----+----+----+----+----+----
```

## Liste des livrables
`Commit` sur github, le délai est donné sur Cyberlearn.
