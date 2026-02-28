#include <string.h>

#define NOMBRE_EQUIPES 7

void saisirEquipes(char noms[][50], int scores[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrez le nom de l'Equipe %d : ", i + 1);
        scanf(" %[^\n]", noms[i]);
        printf("Entrez le score de l'Equipe %d : ", i + 1);
        scanf("%d", &scores[i]);
    }
}

void trierEquipes(char noms[][50], int scores[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] < scores[j]) {
                int tempScore = scores[i];
                scores[i] = scores[j];
                scores[j] = tempScore;
                char tempNom[50];
                strcpy(tempNom, noms[i]);
                strcpy(noms[i], noms[j]);
                strcpy(noms[j], tempNom);
            }
        }
    }
}
void afficherClassement(char noms[][50], int scores[], int n) {
    printf("\nClassement des Equipes :\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s : %d points\n", i + 1, noms[i], scores[i]);
    }
}
int main() {
    char noms[NOMBRE_EQUIPES][50];
    int scores[NOMBRE_EQUIPES];
    printf("Saisissez les informations des Equipes (7 Equipes) :\n");
    saisirEquipes(noms, scores, NOMBRE_EQUIPES);
    trierEquipes(noms, scores, NOMBRE_EQUIPES);
    afficherClassement(noms, scores, NOMBRE_EQUIPES);
    printf("\nClassement des cinq premieres Equipes :\n");
    afficherClassement(noms, scores, 5);
    return 0;
}
