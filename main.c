/**
 * @file main.c
 * @brief Projet modèle pour Integration Continue
 * @author Liova Hovakimyan
 * @version 
 * @date 15/09/2022
 */

#include <stdio.h>
/**
 * @fn int main (void)
 * @brief Fonction principale du programme.
 * @param aucun paramètre.
 * @return 0 - Arrêt normal du programme.
 */
int main(void)
{

    //int lettre;

    printf("***********************************\n");
    printf("                 SNIR-Programme ASCII_ART\n");
    printf("***********************************\n\n");
    printf("  AAA\n AAAAA\nAA   AA\n");
    printf("AAAAAAA\nAA   AA\n");
    printf("\n");
    printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
    printf("\n");
    printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
    printf("\n");

    char lettre;
    printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
    scanf("%c", &lettre);
    printf("La lettre est %c\n", lettre);
    printf("\n");
    if (lettre == 'A' || lettre == 'a'){
        printf("  AAA\n AAAAA\nAA   AA\n");
        printf("AAAAAAA\nAA   AA\n");
    }

    if (lettre == 'B' || lettre == 'b'){
        printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
    }

    if (lettre == 'C' || lettre == 'c'){
        printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
    }

    if (lettre != 'A' && lettre != 'B' && lettre != 'C')
        printf ("Impossible ! Veuillez choisir une lettre entre A, B et C\n");
    printf("\n");

    return 0;
}
