Exercice 4 : Compter les occurrences d'un bigramme
Pour expliquer l'exercice sur le calcul du nombre d'occurrences d'un bigramme dans une chaîne de caractères, nous allons décomposer le concept de bigramme, la procédure à écrire, et les étapes nécessaires pour réaliser cette tâche.

Concepts de Base
Qu'est-ce qu'un Bigramme ?
Un bigramme est une séquence de deux lettres consécutives dans une chaîne de caractères. Par exemple, dans le mot "bonjour", les bigrammes sont "bo", "on", "nj", "jo", et "ur".
Objectif de l'Exercice
L'objectif est de créer une procédure qui prend en entrée une chaîne de caractères et un bigramme, puis qui compte combien de fois ce bigramme apparaît dans la chaîne.
Détails de la Procédure
Entrées :

Une chaîne de caractères (par exemple, "bonjour bonjour").
Un bigramme (par exemple, "on").
Sortie :

Un entier représentant le nombre d'occurrences du bigramme dans la chaîne.
Étapes de la Procédure
Initialisation :

Créer une variable pour compter les occurrences (initialisée à zéro).
Parcours de la Chaîne :

Utiliser une boucle pour parcourir la chaîne de caractères, en s'assurant que l'on ne dépasse pas la longueur de la chaîne moins la longueur du bigramme (puisque le bigramme a deux lettres).
À chaque itération, vérifier si les deux lettres à la position actuelle correspondent au bigramme.
Incrémentation du Compteur :

Si une correspondance est trouvée, incrémenter le compteur.
Retourner le Compteur :

À la fin de la boucle, retourner le compteur qui représente le nombre d'occurrences.
Exemple de Fonctionnement
Supposons que nous avons la chaîne "bonjour bonjour" et que nous cherchons le bigramme "on".

Initialiser le compteur à 0.
Parcourir la chaîne :
À la position 0 : "bo" (pas de correspondance)
À la position 1 : "on" (correspondance, compteur = 1)
À la position 2 : "nj" (pas de correspondance)
À la position 3 : "jo" (pas de correspondance)
À la position 4 : "ur" (pas de correspondance)
À la position 5 : " " (espace, pas de correspondance)
À la position 6 : "bo" (pas de correspondance)
À la position 7 : "on" (correspondance, compteur = 2)
Continuer jusqu'à la fin de la chaîne.
À la fin, le compteur sera 2, indiquant que "on" apparaît deux fois dans "bonjour bonjour".

Conclusion
Ce type d'exercice permet de travailler sur la manipulation de chaînes de caractères et d'apprendre à utiliser des boucles et des conditions pour résoudre des problèmes pratiques. Il est essentiel de bien comprendre comment parcourir une chaîne et comparer des sous-chaînes pour réussir cet exercice.

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