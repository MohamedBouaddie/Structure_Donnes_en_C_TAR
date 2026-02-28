#include <stdlib.h>

int main() {
    int lignes, i;
    printf("Entrez le nombre de phrases : ");
    scanf("%d", &lignes);

    char **phrases = (char **)malloc(lignes * sizeof(char *));
    if (phrases == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    for (i = 0; i < lignes; i++) {
        int taille;
        printf("Entrez le nombre de caractères pour la phrase %d : ", i + 1);
        scanf("%d", &taille);

        phrases[i] = (char *)malloc((taille + 1) * sizeof(char));
        if (phrases[i] == NULL) {
            printf("Erreur d'allocation mémoire.\n");
            return 1;
        }
        printf("Entrez la phrase %d : ", i + 1);
        scanf(" %[^\n]", phrases[i]);
    }
    printf("\nListe des phrases :\n");
    for (i = 0; i < lignes; i++) {
        printf("Phrase %d : %s\n", i + 1, phrases[i]);
    }

    // Libération de la mémoire
    for (i = 0; i < lignes; i++) {
        free(phrases[i]);
    }
    free(phrases); // Libérer le tableau principal
    return 0;
}
