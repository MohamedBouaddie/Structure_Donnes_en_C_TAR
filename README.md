# Travail à rendre — Structure Donnes en C (Fonctions, Pointeurs, Structures)

Ce dépôt regroupe une série d’exercices en langage **C** portant sur :
- les **fonctions** (retour, paramètres),
- l’**allocation dynamique** (`malloc`, `free`),
- les **tableaux** et **pointeurs** (dont pointeur de pointeurs),
- les **chaînes de caractères**,
- les **structures** (`struct`) et la manipulation de tableaux via structures.

---

## 🎯 Objectif
L’objectif est de pratiquer la programmation en C en appliquant :
- la conversion et le traitement de données (binaire, occurrences),
- la manipulation mémoire (tableaux dynamiques, matrices dynamiques),
- la structuration d’informations (articles, étudiants),
- l’organisation du code en plusieurs fichiers (recommandé).

---

## ✅ Liste des exercices

### 🔹 Exercice 1 — Code binaire
Écrire une fonction qui prend en paramètre un entier et renvoie son **code binaire**.

### 🔹 Exercice 2 — Allocation & initialisation d’un tableau
Écrire une fonction qui :
- lit un entier `n`,
- alloue un tableau de `n` entiers,
- initialise `tab[i] = (100 * i) mod 87`,
- retourne le tableau (ou affiche les éléments).

### 🔹 Exercice 3 — Occurrences dans un tableau
Écrire une fonction qui reçoit :
- un tableau d’entiers `tab`,
- sa taille `n`,
- un entier `m`,
et retourne le nombre d’occurrences de `m` dans `tab` (ou 0 s’il n’existe pas).

### 🔹 Exercice 4 — Occurrences d’un caractère dans une chaîne
Écrire une fonction qui prend :
- une chaîne de caractères,
- un caractère donné,
et renvoie le nombre d’occurrences de ce caractère dans la chaîne.

### 🔹 Exercice 5 — Pointeur de pointeurs (int) / matrice dynamique
Écrire un programme qui :
- crée un **pointeur de pointeurs** `int**`,
- demande le nombre de lignes `N`,
- demande le nombre de colonnes pour chaque ligne (colonnes variables),
- remplit et affiche la matrice,
- libère la mémoire.
✅ Traiter le cas : **N lignes fixes et M colonnes variables**.

### 🔹 Exercice 6 — Pointeur de pointeurs (char) / phrases dynamiques
Écrire un programme qui :
- crée un **pointeur de pointeurs** `char**`,
- demande le nombre de phrases,
- demande la taille de chaque phrase,
- remplit et affiche les phrases,
- libère la mémoire.
✅ Traiter le cas : **N lignes fixes et M colonnes variables**.

### 🔹 Exercice 7 — Classement des équipes (tableaux ou pointeurs)
Écrire deux programmes qui gèrent le classement d’un championnat (20 équipes) :
- saisie des **noms** et **scores**,
- tri / classement (ordre décroissant des scores),
- affichage du classement.
✅ Donner un exemple avec 5 équipes.

---

## ➕ Exercices supplémentaires (8 → 11)

### 🔹 Exercice 8 — Calcul de f(x) sur un tableau
Soit `f(x) = x² + 4x + 1`, pour `x` dans `D*` :
1. Écrire une fonction qui reçoit un tableau de `x` (max 10) et sa taille, et retourne un tableau de `f(x)`.
2. Écrire le programme principal : saisir les `x` et afficher les `f(x)`.

### 🔹 Exercice 9 — Gestion d’articles (struct Articles)
Écrire un programme qui permet la saisie et l’affichage des informations de plusieurs articles :
- Code, Titre, Auteur, Éditeur (journal), Volume, Date_Pub.

### 🔹 Exercice 10 — Structure StructTab (notes/coeff/moyennes)
Créer une structure `StructTab` contenant :
- `nbElem`,
- l’adresse d’un tableau de notes,
- l’adresse d’un tableau de coefficients,
- l’adresse d’un tableau de moyennes,
puis refaire l’exercice en utilisant cette structure.

```c
typedef struct{
    int nbElem;
    int *tabNotes;
    int *tabCoeff;
    int *tabMoy;
} StructTab;
