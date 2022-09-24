/**
 * @file main.c
 * @brief Projet Ascii_art
 * @author Liova Hovakimyan
 * @version 2.0
 * @date 15/09/2022
 */

#include <stdio.h>
/**
 * @fn void viderBuffer(void)
 * @brief Vide le buffer de lecture clavier.
 * @fn int main (void)
 * @brief Fonction principale du programme.
 * @param aucun paramètre.
 * @return 0 - Arrêt normal du programme.
 */
int main()
{

    printf("***********************************\n");
    printf("                 SNIR-Programme ASCII_ART\n");
    printf("***********************************\n\n");
    //printf("  AAA\n AAAAA\nAA   AA\n");
    //printf("AAAAAAA\nAA   AA\n");
    //printf("\n");
    //printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
    //printf("\n");
    //printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
    //printf("\n");

    char condition;
    char lettre;
    int choix;

    do
    {
        printf("\n");
        printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
        scanf("%c", &lettre);
        getchar();
        void viderBuffer();
        printf("La lettre est %c\n", lettre);
        printf("\n");
        switch (lettre)
        {

        case 'A' :
            printf("  AAA\n AAAAA\nAA   AA\n");
            printf("AAAAAAA\nAA   AA\n");
            break;

        case 'B' :
            printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
            break;

        case 'C' :
            printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
            break;
        case '*' :
            printf (" Voulez-vous quitter le programme ?");

        default :
            printf(" Impossible ! Votre lettre doit etre A, B ou C en majuscule\n");
        }
        if (lettre == '*')
        {
            exit(0);
        }
    } while (choix !=1);

    //    if (lettre == 'a' && lettre == 'b' && lettre == 'c')

    //        printf ("Impossible ! Veuillez choisir une lettre entre A, B et C\n");
    //    printf("\n");
    return 0;
}
