#include "unity.h"
#include "../src/fonction.h" // Inclure les fonctions à tester

void setUp() {} // S'exécute avant chaque test (initialisation)
void tearDown() {} // S'exécute après chaque test (nettoyage)

// Test pour une fonction simple
void test_ajouter() {
    FILE *fichier = fopen("projet.txt", "a+");
    TEST_ASSERT_NOT_NULL(fichier); // Vérifie que le fichier s'ouvre correctement

    int resultat = ajouter(fichier, "Alice");
    TEST_ASSERT_EQUAL(0, resultat); // Vérifie que la fonction retourne 0 (succès)

    fclose(fichier);
}

// Test pour afficher()
void test_afficher() {
    FILE *fichier = fopen("projet.txt", "a+");
    TEST_ASSERT_NOT_NULL(fichier); // Vérifie que le fichier s'ouvre correctement

    afficher(fichier); // Assurez-vous que la fonction ne plante pas
    fclose(fichier);
}
void test_rechercher(){
    FILE *fichier = fopen("projet.txt", "a+");
    TEST_ASSERT_NOT_NULL(fichier); // Vérifie que le fichier s'ouvre correctement
    int resultat=rechercher(fichier,"tobi",)
     TEST_ASSERT_EQUAL(0, resultat);
}

int main() {
    UNITY_BEGIN(); // Initialisation du framework Unity

    RUN_TEST(test_ajouter_cntct); // Exécute le test
    RUN_TEST(test_afficher); // Exécute un autre test

    return UNITY_END(); // Résumé des résultats
}
