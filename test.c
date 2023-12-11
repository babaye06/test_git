#include <stdio.h>

int main() {
    // Nom du fichier à créer
    const char *nom_fichier = "mon_fichier.txt";

    // Ouvre le fichier en mode écriture (w)
    FILE *fichier = fopen(nom_fichier, "w");

    // Vérifie si l'ouverture du fichier a réussi
    if (fichier == NULL) {
        fprintf(stderr, "Erreur lors de la création du fichier.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Écrit dans le fichier
    fprintf(fichier, "Création de fichier réussie\n");

    // Ferme le fichier
    fclose(fichier);

    printf("Opération réussie : fichier créé et écrit.\n");

    return 0; // Quitte le programme avec succès
}