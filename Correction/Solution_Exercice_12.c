#include <stdbool.h>

int main() {
    int rest, NombD, NombBin, j = 0, i = 0;
    bool TBin[32];  // tableau pour stocker les bits (max 32 bits)

    printf("Saisir un nombre entier positif : ");
    scanf("%d", &NombD);

    // Vérification du nombre (doit être positif)
    if (NombD < 0) {
        printf("Erreur : le nombre doit être positif.\n");
        return 1;
    }

    // Conversion en binaire
    while (NombD > 0) {
        rest = NombD % 2;
        TBin[i] = rest;
        NombD = NombD / 2;
        i++;
    }

    printf("Le nombre binaire est :\n");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", TBin[j]);
    }

    printf("\n");

    return 0;
}
