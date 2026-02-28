#include <stdio.h>

int compterOccurrences(int tableau[], int n, int m) {
    int compteur = 0;

    for (int i = 0; i < n; i++) {
        if (tableau[i] == m) {
            compteur++;  
        }
    }
    return compteur;  
}
int main() {
    int n, m;
    // Lecture de la taille du tableau et de l'élément à chercher
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);
    int tableau[n];
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("Entrez l'élément m à rechercher : ");
    scanf("%d", &m);
    int occurrences = compterOccurrences(tableau, n, m);

    printf("L'élément %d apparaît %d fois dans le tableau.\n", m, occurrences);
    return 0;
}
