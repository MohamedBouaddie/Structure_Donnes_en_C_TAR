#include <stdlib.h>

typedef struct {
    char nom[20];
    float* notes;
    float* moy;
} Student;

int main() {
    int N, M;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &N);

    // Allocation dynamique d'un tableau de N étudiants
    Student* etudiants = (Student*)malloc(N * sizeof(Student));

    printf("Entrez le nombre de notes par etudiant : ");
    scanf("%d", &M);

    // Allocation et initialisation
    for (int i = 0; i < N; i++) {
        printf("\nEtudiant %d\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);

        // Allocation des notes
        etudiants[i].notes = (float*)malloc(M * sizeof(float));
        // Allocation pour une seule moyenne par étudiant
        etudiants[i].moy = (float*)malloc(sizeof(float));

        float somme = 0.0;
        for (int j = 0; j < M; j++) {
            printf("Note %d : ", j + 1);
            scanf("%f", &etudiants[i].notes[j]);
            somme += etudiants[i].notes[j];
        }

        *(etudiants[i].moy) = somme / M;
    }

    // Affichage des informations
    printf("\nAffichage des etudiants :\n");
    for (int i = 0; i < N; i++) {
        printf("\nNom : %s\n", etudiants[i].nom);
        printf("Notes : ");
        for (int j = 0; j < M; j++) {
            printf("%.2f ", etudiants[i].notes[j]);
        }
        printf("\nMoyenne : %.2f\n", *(etudiants[i].moy));
    }

    // Libération de la mémoire
    for (int i = 0; i < N; i++) {
        free(etudiants[i].notes);
        free(etudiants[i].moy);
    }
    free(etudiants);

    return 0;
}
