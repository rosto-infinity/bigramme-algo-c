#include <stdio.h>
#include <string.h>

int CompterBigramme(const char *chaine, const char *bigramme) {
    int compteur = 0;
    int longueur = strlen(chaine);
    int longueurBigramme = strlen(bigramme);

    for (int i = 0; i <= longueur - longueurBigramme; i++) {
        if (strncmp(&chaine[i], bigramme, longueurBigramme) == 0) {
            compteur++;
        }
    }
    return compteur;
}

int main() {
    const char *chaine = "bonjour bonjour";
    const char *bigramme = "on";
    int occurrences = CompterBigramme(chaine, bigramme);
    printf("Occurrences de '%s' : %d\n", bigramme, occurrences);
    return 0;
}