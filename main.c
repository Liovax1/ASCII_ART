/**
 * @file main.c
 * @brief Projet Ascii_art
 * @author Liova Hovakimyan
 * @version 4.0
 * @date 15/09/2022
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "img_bmp/img_bmp.h"

#pragma pack(1) // desactive l'alignement mémoire

/**
 * @fn void viderBuffer(void)
 * @brief Vide le buffer de lecture clavier.
 * @fn int main (void)
 * @brief Fonction principale du programme.
 * @param aucun paramètre.
 * @return 0 - Arrêt normal du programme.
 */

/**
 * @fn void afficherAsciiArt(void)
 * @brief Affiche AsciiArt
 * @fn int main (void)
 * @brief Fonction principale du programme.
 * @param char caractère
 * @return 0 - Arrêt normal du programme.
 */

/**
* @fn int main (void)
* @brief Fonction principale du programme.
* @param aucun paramètre.
* @return 0 - Arrêt normal du programme.
*/

char tableauA[5][8]= {{' ',' ','A','A','A',' ',' ','\0'},
                      {' ','A','A','A','A','A',' ','\0'},
                      {'A','A',' ',' ',' ','A','A','\0'},
                      {'A','A','A','A','A','A','A','\0'},
                      {'A','A',' ',' ',' ','A','A','\0'}};

char tableauB[5][8]= {{'B','B','B','B','B',' ',' ','\0'},
                      {'B','B',' ',' ',' ','B',' ','\0'},
                      {'B','B','B','B','B','B',' ','\0'},
                      {'B','B',' ',' ',' ','B','B','\0'},
                      {'B','B','B','B','B','B',' ','\0'}};

char tableauC[5][8]= {{' ','C','C','C','C','C',' ','\0'},
                      {'C','C',' ',' ',' ',' ','C','\0'},
                      {'C','C',' ',' ',' ',' ',' ','\0'},
                      {'C','C',' ',' ',' ',' ','C','\0'},
                      {' ','C','C','C','C','C',' ','\0'}};


void afficherAsciiArt(char caractère);
void sousfonctionadaptee(void)
{


printf("***********************************\n");
printf("                 SNIR-Programme ASCII_ART\n");
printf("***********************************\n\n");

char condition;
char lettre;
int choix;
int i;


int longueur = strlen (tableauA);
for (i=0 ;i<longueur ; i++){
    printf ("%c", longueur);
}

for (i=0 ; i<5 ; i++) {
    printf("%s\n", tableauA[i]);
}
printf("\n");

for (i=0 ; i<5 ; i++) {
    printf("%s\n", tableauB[i]);
}
printf("\n");

for (i=0 ;i<5 ; i++) {
    printf("%s\n", tableauC[i]);
}
printf("\n");


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
}
int main()
{
    FILE *file;

    printf("Nom du fichier à ouvrir %s \n", "tux64.bmp");
    file = fopen("ImagesBmp/tux64.bmp", "rb");
    if (!file)  {
        printf("Erreur ouverture \n");
        exit(-1);
    }

    fclose(file);

    char signature[2];
    int test = fread(signature, 2, 1, file);
    if(test != 1) {
        printf("fread impossible \n");
        exit(-1);
    }
    printf("Lecture de %c et %c \n", signature[0], signature[1]);



    return 0;
}
