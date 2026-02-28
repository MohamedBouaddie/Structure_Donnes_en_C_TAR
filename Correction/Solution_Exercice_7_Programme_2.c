#include <string.h>

typedef struct {
    char nom[50];
    int score;
} Equipe;
void saisirEquipes(Equipe *equipes, int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrez le nom de l'Equipe %d : ", i + 1);
        scanf(" %[^\n]", equipes[i].nom);
        printf("Entrez le score de l'Equipe %d : ", i + 1);
        scanf("%d", &equipes[i].score);
    }
}
void trierEquipes(Equipe *equipes, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (equipes[i].score < equipes[j].score) {
                Equipe temp = equipes[i];
                equipes[i] = equipes[j];
                equipes[j] = temp;
            }
        }
    }
}
void afficherClassement(Equipe *equipes, int n) {
    printf("\nClassement des Equipes :\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s : %d points\n", i + 1, equipes[i].nom, equipes[i].score);
    }
}
int main() {
    int n = 7; // Nombre d'équipes
    Equipe *equipes = (Equipe *)malloc(n * sizeof(Equipe)); // Allocation dynamique
    if (equipes == NULL) {
        printf("Erreur d'allocation memoire.\n");
        return 1;
}
    printf("Saisissez les informations des Equipes (7 Equipes) :\n");
    saisirEquipes(equipes, n);
    trierEquipes(equipes, n);
    afficherClassement(equipes, n);
    // Exemple pour les cinq premières équipes
    printf("\nClassement des cinq premieres equipes :\n");
    afficherClassement(equipes, 5);
    free(equipes);
    return 0;
}
