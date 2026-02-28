#include <stdlib.h>

int main() {
    int N, i, j;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &N);
    int **tableau = malloc(N * sizeof(int *));
    int *colonnes = (int *)malloc(N * sizeof(int));
    // 2. Saisie du nombre de colonnes pour chaque ligne
    for (i = 0; i < N; i++) {
        printf("Entrez le nombre de colonnes pour la ligne %d : ", i + 1);
        scanf("%d", &colonnes[i]);
        // Allocation mémoire pour chaque ligne
        tableau[i] = (int *)malloc(colonnes[i] * sizeof(int));
        // Remplir les éléments
        for (j = 0; j < colonnes[i]; j++) {
            printf("Entrez l'element [%d][%d] : ", i, j);
            scanf("%d", &tableau[i][j]);
        }
    }
    // 3. Affichage du tableau
    printf("\nContenu du tableau :\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < colonnes[i]; j++) {
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
    // 4. Libération de la mémoire
    for (i = 0; i < N; i++) {
        free(tableau[i]);
    }
    free(tableau);
    free(colonnes);
    return 0;
}
