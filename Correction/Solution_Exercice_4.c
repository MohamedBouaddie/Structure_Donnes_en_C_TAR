#include <string.h>

int compterOccurrencesChar( char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char chaine[100], caractere;
    printf("Entrez une phrase : ");
    scanf(" %[^\n]", chaine);

    printf("Entrez le caractere a rechercher : ");
    scanf(" %c", &caractere);

    printf("Occurrences du caractere '%c' : %d\n", caractere, compterOccurrencesChar(chaine, caractere));
    return 0;
}
