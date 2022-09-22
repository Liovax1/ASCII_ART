/**
 * @file main.c
 * @brief Projet Ascii_art
 * @author Liova Hovakimyan
 * @version 2.0
 * @date 15/09/2022
 */

#include <stdio.h>
/**
 * @fn int main (void)
 * @brief Fonction principale du programme.
 * @param aucun paramètre.
 * @return 0 - Arrêt normal du programme.
 */
int main()
{

    printf("***********************************\n");
    printf("                 SNIR-Programme ASCII_ARTv1.0\n");
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
    printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
    scanf("%c", &lettre);
    void viderbuffer();
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
    }
    if (lettre != 'A' && lettre != 'B' && lettre != 'C') {
    printf ("Impossible ! Veuillez choisir une lettre entre A, B et C\n");
    printf("\n");
    }




    return 0;
}





//if (lettre == 'A' || lettre == 'a'){
// printf("  AAA\n AAAAA\nAA   AA\n");
//printf("AAAAAAA\nAA   AA\n");
//}

//if (lettre == 'B' || lettre == 'b'){
//printf("BBBBB\nBB   B\nBBBBBB\nBB   BB\nBBBBBB\n");
//}

//if (lettre == 'C' || lettre == 'c'){
// printf(" CCCCC\nCC    C\nCC     \nCC    C\n CCCCC \n");
//}

//if (lettre != 'A' && lettre != 'B' && lettre != 'C')
// printf ("Impossible ! Veuillez choisir une lettre entre A, B et C\n");
// printf("\n");
