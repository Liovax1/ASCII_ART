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
//float a= lettre;
//float b= lettre;
//float c= lettre;

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

    char lettre = 'A',lettre2 = 'B', lettre3 = 'C';
    printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
    scanf("%c,&lettre");
    printf("  AAA\n AAAAA\nAA   AA\n");
    printf("AAAAAAA\nAA   AA\n");
    printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
    scanf("%c,&B");
    printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
    printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
    scanf("%c,&C");
    printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
    return 0;
}
