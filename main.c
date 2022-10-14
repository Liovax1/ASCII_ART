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
 */

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}

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



void afficherAsciiArt(char lettre);
void afficherPhrase(void);
void sousfonctionadaptee(void);


void afficherAsciiArt(char lettre)
{
    lettre = toupper(lettre);

    switch(lettre){
    afficherAsciiArt('A');
    case 'A' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauA[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('B');
    case 'B' : {
        for (int i = 0 ; i < 5 ; i ++)  {
            for (int j = 0 ; j < 8 ; j++)   {
                printf("%c", tableauB[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('C');
    case 'C' : {
        for (int i = 0 ; i < 5 ; i ++)  {
            for (int j = 0 ; j < 8 ; j++)   {
                printf("%c", tableauC[i][j]);
            }
            printf("\n");
        }
        break;
    }
    default :
        printf(" Impossible ! Votre lettre doit etre A, B ou C en majuscule\n");
    }
}

void afficherPhrase(void)
{
    char sortie;
    sortie = '*';
    do
    {

        printf("***********************************\n");
        printf("                 SNIR-Programme ASCII_ART\n");
        printf("***********************************\n\n");
        char lettre;
        char phrase[100];
        printf("Quelle lettre souhaitez-vous afficher (A,B ou C) ?:\n");
        scanf("%c", &lettre);
        afficherAsciiArt(lettre);
        viderBuffer();
        printf("La lettre est %c\n", lettre);
        printf("\n");
        int longueur = strlen(phrase);
        int i;
        for (i=0 ; i<longueur ; i++){
            afficherAsciiArt(phrase[i]);
        }
        printf("Voulez-vous arrêter le programme ? Appuyez sur *.\n\n");
        scanf("%c", &sortie);
        viderBuffer();
    }
    while (sortie != '*');
    printf("\Sortie du programme\n\n");
}


/**
* @fn int main (void)
* @brief Fonction principale du programme.
* @param aucun paramètre.
* @return 0 - Arrêt normal du programme.
*/

int main()
{
    FILE *file;

    printf("Nom du fichier a ouvrir: %s \n", "tux64.bmp");
    file = fopen("/ImagesBmp/tux64.bmp", "rb");
    if (!file)  {
        printf("Erreur ouverture \n");
        exit(-1);
    }
    char signature[2];
    int taille [1];
    int test = fread(signature, 2, 1, file);
    if(test != 1) {
        printf("fread impossible \n");
        exit(-1);
    }
    printf("Lecture de %c et %c \n", signature[0], signature[1]);
    printf("Taille totale du fichier: %d %d %d %d\n", taille[0]);
    fclose(file);
    return 0;
}

