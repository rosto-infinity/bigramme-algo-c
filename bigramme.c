#include <stdio.h>
#include <string.h>

// Fonction pour compter les occurrences d'un bigramme dans une chaîne
int compterBigramme(const char *chaine, const char *bigramme) {
    int compteur = 0; // Initialiser le compteur à 0
    int longueurChaine = strlen(chaine);
    int longueurBigramme = strlen(bigramme);

    for (int i = 0; i <= longueurChaine - longueurBigramme; i++) {
        if (strncmp(&chaine[i], bigramme, longueurBigramme) == 0) {
            compteur++; // Incrémenter le compteur
        }
    }

    return compteur; // Retourner le nombre d'occurrences
}

// Fonction principale pour tester la fonction compterBigramme
int main() {
    char chaine[100], bigramme[3]; // 2 lettres + 1 pour le caractère nul
    int resultat;

    // Saisir la chaîne et le bigramme
    printf("Saisir la chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = 0; // Enlever le saut de ligne

    printf("Saisir le bigramme : ");
    fgets(bigramme, sizeof(bigramme), stdin);
    bigramme[strcspn(bigramme, "\n")] = 0; // Enlever le saut de ligne

    // Appeler la fonction compterBigramme
    resultat = compterBigramme(chaine, bigramme);

    // Afficher le résultat
    printf("Le bigramme \"%s\" apparaît %d fois dans la chaîne.\n", bigramme, resultat);

    return 0; // Fin du programme
}
