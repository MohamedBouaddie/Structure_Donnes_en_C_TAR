#include <stdio.h>

void afficherBinaire(int n) {
    int binaire[32];
    int i = 0;
    if (n == 0) {
        printf("0\n");
        return;
    }
    while (n > 0) {
        binaire[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binaire : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }
    printf("\n");
}
int main() {
    int nombre;
    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    afficherBinaire(nombre);
    return 0;
}
