#include <stdlib.h>

typedef struct {
    int code;
    char titre[100];
    char auteur[50];
    char editeur[50];
    int volume;
    char datePub[20];
} Article;
// Fonction pour saisir les informations d'un article
void saisirArticle(Article *a) {
    printf("\nEntrez le code de l'article : ");
    scanf("%d", &a->code);
    printf("Entrez le titre de l'article : ");
    scanf(" %[^\n]", a->titre); // %[^\n] pour lire toute la ligne
    printf("Entrez le nom de l'auteur : ");
    scanf(" %[^\n]", a->auteur);
    printf("Entrez le nom de l'Editeur : ");
    scanf(" %[^\n]", a->editeur);
    printf("Entrez le numero de volume : ");
    scanf("%d", &a->volume);
    printf("Entrez la date de publication (ex: JJ/MM/AAAA) : ");
    scanf(" %[^\n]", a->datePub);
}


void afficherArticle(Article a) {
    printf("\n--- Informations de l'article ---\n");
    printf("Code       : %d\n", a.code);
    printf("Titre      : %s\n", a.titre);
    printf("Auteur     : %s\n", a.auteur);
    printf("Editeur    : %s\n", a.editeur);
    printf("Volume     : %d\n", a.volume);
    printf("Date Pub.  : %s\n", a.datePub);
}

int main() {
    int n;
    printf("Entrez le nombre d'articles : ");
    scanf("%d", &n);
    Article *articles = (Article *)malloc(n * sizeof(Article));
    if (articles == NULL) {
        printf("Erreur d'allocation memoire.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\n--- Article %d ---\n", i + 1);
        saisirArticle(&articles[i]);
    }
    printf("\nListe des articles :\n");
    for (int i = 0; i < n; i++) {
        afficherArticle(articles[i]);
    }
    free(articles);
    return 0;
}
