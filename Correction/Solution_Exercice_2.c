#include <stdlib.h>
int* creerTableauZero(int n) {
    int *tab = calloc(n, sizeof *tab);
    if (!tab) {
        printf("Erreur : allocation de mémoire impossible.\n");
        return NULL;
    }
    return tab;
}

int main(void) {
    int N;
    printf("Entrez un entier N (nombre d'éléments) : ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Valeur invalide.\n");
        return 1;
    }
    int *tableau = creerTableauZero(N);
    if (!tableau) {
        return 1;
    }
    printf("Contenu du tableau initialisé à 0 :\n");
    for (int i = 0; i < N; i++) {
        printf("tableau[%d] = %d\n", i, tableau[i]);
    }

    free(tableau);
    return 0;
}
