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

    char condition;
    char lettre;
    int choix;
    int i;
    char tableauA[5][8]= {{' ',' ','A','A','A',' ',' ','\0'},
                          {' ','A','A','A','A','A',' ','\0'},
                          {'A','A',' ',' ',' ','A','A','\0'},
                          {'A','A','A','A','A','A','A','\0'},
                          {'A','A',' ',' ',' ','A','A','\0'}};
    printf("\n");

//    char tableauB[5][8]= {{'B';'B','B','B','B',' ',' ','\0'},
//                              {{'B';'B',' ',' ',' ','B',' ','\0'},
//                              {{'B';'B','B','B','B','B',' ','\0'},
//                              {{'B';'B',' ',' ',' ','B','B','\0'},
//                              {{'B';'B','B','B','B','B',' ','\0'}};



    for (i=0 ; i<5 ; i++) {
        printf("C'est un caractère : %s\n", tableauA[i]);
    }

//    char tableauB[5][8]= {{'B';'B','B','B','B',' ',' ','\0'},
//                              {{'B';'B',' ',' ',' ','B',' ','\0'},
//                              {{'B';'B','B','B','B','B',' ','\0'},
//                              {{'B';'B',' ',' ',' ','B','B','\0'},
//                              {{'B';'B','B','B','B','B',' ','\0'}};
//char tableauB[5][8]=

//    tableauA[5][8] ='A';

//    {{'B';'B','B','B','B',' ',' ','\0'},
//    {{'B';'B',' ',' ',' ','B',' ','\0'},
//    {{'B';'B','B','B','B','B',' ','\0'},
//    {{'B';'B',' ',' ',' ','B','B','\0'},
//    {{'B';'B','B','B','B','B',' ','\0'}};
//   tableauA[5][8] ='B';


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
            printf("  AAA\n AAAAA\nAA   AA\nAAAAAAA\nAA   AA\n");
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

    return 0;
}
