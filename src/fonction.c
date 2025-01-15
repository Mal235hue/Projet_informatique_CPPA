#include "fonction.h"

void afficher(FILE *fichier) {
    char ligne[200];
    rewind(fichier); 
    while (fgets(ligne, sizeof(ligne), fichier)) {
        printf("%s", ligne);
    }
}

int ajouter_texte(FILE *fichier, char texte_a_rentrer[]) {
    if (compteur >= 1000) {
        printf("Vous ne pouvez plus ajouter de texte.\n");
        return 1;
    }
    fprintf(fichier, "%s", texte_a_rentrer);
    compteur += strlen(texte_a_rentrer);
    return 0;
}

int rechercher(FILE *fichier, char mot_a_chercher[], int *occurence) {
    char ligne[200];
    rewind(fichier); 
    *occurence = 0;
    while (fgets(ligne, sizeof(ligne), fichier)) {
        char *resultat = ligne;
        while ((resultat = strstr(resultat, mot_a_chercher)) != NULL) {
            (*occurence)++;
            resultat++;
        }
    }
    return 0;
}
