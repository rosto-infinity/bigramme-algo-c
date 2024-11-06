Exercice 4 : Compter les occurrences d'un bigramme
Algorithme
Procédure CompterBigramme

Entrée : une chaîne de caractères chaine, un bigramme bigramme
Sortie : nombre d'occurrences de bigramme dans chaine
Initialiser compteur à 0
Pour i de 0 à (longueur de chaine - 2) faire :
Si chaine[i:i+2] est égal à bigramme alors
Incrémenter compteur
Retourner compteur
Fonction CompterBigramme

La même logique que la procédure, mais elle retourne le compteur directement.
Code C

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