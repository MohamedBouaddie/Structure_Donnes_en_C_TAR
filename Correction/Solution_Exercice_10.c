#include <stdlib.h>

#define MAX 10 // Taille maximale

// Déclaration de la structure
typedef struct {
    int nbElem;
    int *tabNotes;
    int *tabCoeff;
    int *tabMoy;
} StructTab;

// Fonction pour calculer f(x) = x^2 + 4x + 1
void calculF(int x[], int taille, int fx[]) {
    for (int i = 0; i < taille; i++) {
        fx[i] = x[i] * x[i] + 4 * x[i] + 1;
    }
}

int main() {
    StructTab tab;
    int i;

    // Saisie du nombre d'éléments
    printf("Entrez la taille du tableau (max %d) : ", MAX);
    scanf("%d", &tab.nbElem);

    if (tab.nbElem > MAX || tab.nbElem <= 0) {
        printf("Erreur : La taille doit etre entre 1 et %d.\n", MAX);
        return 1;
    }

    // Allocation dynamique
    tab.tabNotes = (int *)malloc(tab.nbElem * sizeof(int));
    tab.tabCoeff = (int *)malloc(tab.nbElem * sizeof(int));
    tab.tabMoy   = (int *)malloc(tab.nbElem * sizeof(int));


    if (!tab.tabNotes || !tab.tabCoeff || !tab.tabMoy) {
        printf("Erreur d'allocation memoire.\n");
        return 1;
    }

    // Saisie des notes
    printf("Entrez %d notes :\n", tab.nbElem);
    for (i = 0; i < tab.nbElem; i++) {
        printf("Note %d : ", i + 1);
        scanf("%d", &tab.tabNotes[i]);

        // Coefficient croissant pour chaque note
        tab.tabCoeff[i] = i + 1;
    }

    // Calcul des moyennes via f(x)
    calculF(tab.tabNotes, tab.nbElem, tab.tabMoy);

    // Affichage
    printf("\n--- Resultats ---\n");
    for (i = 0; i < tab.nbElem; i++) {
        printf("Note : %d | Coeff : %d | Moyenne (f(x)) : %d\n",
               tab.tabNotes[i], tab.tabCoeff[i], tab.tabMoy[i]);
    }

    // Libération mémoire
    free(tab.tabNotes);
    free(tab.tabCoeff);
    free(tab.tabMoy);

    return 0;
}
