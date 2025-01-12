
#ifndef FONCTION_H
#define FONCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Déclaration de la variable globale
extern int compteur; 

// Prototypes des fonctions
void afficher(FILE *fichier);
int ajouter_texte(FILE *fichier, char texte_a_rentrer[]);
int rechercher(FILE *fichier, char mot_a_chercher[], int *occurence);

#endif // FONCTION_H


