#include "fonction.h"

int compteur = 0;

int main(int argc, char *argv[]) {
    FILE *fichier = fopen("projet.txt", "a+");
    if (fichier == NULL) {
        perror("Erreur d'ouverture du fichier");
        return 1;
    }

    int choix;
    do {
        char input[1001];
        printf("Bienvenue dans votre editeur de texte\nEntrez votre texte : ");
        getchar();
        fgets(input, sizeof(input), stdin);
        ajouter_texte(fichier, input);
        fflush(fichier);
        printf("Nombre de caracteres : %d\n", compteur);
        printf("Voulez-vous ajouter du texte ? (0 = Non, 1 = Oui) : ");
        scanf("%d", &choix);
    } while (choix == 1);

    afficher(fichier);

    int second_choice;
    

    while (second_choice == 1)
    {
        printf("\nVoulez-vous connaitre le nombre d'occurrences d'un mot dans votre texte ? (0 = Non, 1 = Oui) : ");
        scanf("%d", &second_choice);
          int nbre = 0;
        char mot[200];
        getchar();
        printf("Entrez le mot ou le groupe de mots a rechercher : ");
        fgets(mot, sizeof(mot), stdin);
        mot[strcspn(mot, "\n")] = '\0';
        rechercher(fichier, mot, &nbre);
        printf("Votre mot apparaît dans le texte %d fois.\n", nbre);
    }
      
    

    fclose(fichier);
    return 0;
}





