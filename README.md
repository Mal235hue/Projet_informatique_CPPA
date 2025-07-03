# Projet_informatique_CPPA
 This work is a common work done by students of CPPA
 PROJET N 05: Gestionnaire de fichiers texte
 Description : Créer un programme qui permet de manipuler des fichiers texte. L'application
    doit permettre de créer, modifier, et afficher le contenu de fichiers texte. Le programme
    doit également pouvoir rechercher des mots spécifiques dans le fichier.
     Fonctionnalités :
○ Créer un nouveau fichier texte ou ouvrir un fichier existant.
○ Lire et afficher le contenu d’un fichier texte.
○ Ajouter du texte à un fichier existant.
○ Rechercher un mot spécifique dans le fichier et afficher le nombre d'occurrences.
○ Sauvegarder les modifications.

INTRODUCTION
De manière générale, notre code se basera sur une variable globale « chaîne de
caractère » que nous allons copier dans le fichier texte. Ainsi c’est cette variable
que nous allons manipuler pour toutes nos opérations. Notre fichier texte
pourra prendre au maximum 1000 caractères donc notre chaîne de caractère
devra aussi avoir cette taille Nous allons privilégier les déclarations avec
pointeurs pour éviter les débordements d’espace. Les codes sur les déclarations
avec pointeurs sont dans le cours donc nous allons nous en inspirer pour
déclarer le plus possible des pointeurs.

Partage des activités
1. Souad ACAKPO (Fonctions) et Rose AGBAHOLOU (Tests unitaires)
Activités :
Création ou ouverture de fichiers texte
Implémenter une fonction de création et d'ouverture de fichiers texte.
Gérer les erreurs d'ouverture avec perror.
Utiliser les bons modes d'ouverture (w, r, a, etc.) en fonction des besoins.
Vérifier si le fichier existe déjà avant de l’écraser.
Tests unitaires :
Vérifier les cas où le fichier n'existe pas.
Vérifier l'ouverture avec les bons modes (r, a+, etc.).
Tester le comportement avec des noms de fichiers invalides.
Affichage du contenu du fichier
Implémenter une fonction void afficher(FILE *fichier) qui lit le contenu du
fichier avec fgets.
Utiliser rewind pour réinitialiser le curseur de lecture.
Assurez-vous que l’affichage inclut tous les caractères, même en cas de fichiers
contenant plusieurs lignes.
Tests unitaires :
Tester avec des fichiers vides, des fichiers courts, et des fichiers atteignant la
limite de 1000 caractères.

2. Maroine MOUSSA-YAYA (Fonctions) et Jean-Marc KOSSOKO (Tests
unitaires)
Activités :
Ajout de texte au fichier
Implémenter une fonction int ajouter(FILE *fichier, char texte[]) qui :
Vérifie que le fichier ne dépasse pas 1000 caractères après l’ajout.
Retourne 1 si le fichier est plein, sinon ajoute le texte au fichier.
Utilise une variable pour compter le nombre total de caractères dans le fichier.
Ajoute le texte à l'aide de fputs ou fprintf.
Tests unitaires :
Tester les ajouts successifs dans un fichier.
Vérifier le comportement avec des fichiers presque pleins.
Tester le rejet d’ajouts lorsque la limite est atteinte.
3. Chifaou GBEDE(tests unitaires) et Oswald AGBALOHOUN (fonction)
Activité :
Recherche de mots spécifiques dans le texte
Implémenter une fonction int rechercher(FILE *fichier, const char *mot) qui :
Utilise une boucle pour lire chaque ligne du fichier.
Compte le nombre d’occurrences du mot recherché en utilisant strstr.
Affiche les occurrences trouvées avec leur position dans le texte.
Inclut une vérification pour les fichiers vides.
Exemple de signature : int rechercher(FILE *fichier, const char *mot).
Tests unitaires :
Tester avec un mot présent plusieurs fois.
Tester avec un mot absent du texte.
Tester la recherche avec des mots proches mais différents (e.g., "test" et
"tester").

Ce projet a donc été réalisé en groupe avec mes camarades de classe.
