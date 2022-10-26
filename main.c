/**
 * @file main.c
 * @brief Projet Ascii_art
 * @author Liova Hovakimyan
 * @version 5.1
 * @date 26/10/2022
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "img_bmp/img_bmp.h"

#pragma pack(1) // desactive l'alignement mémoire

Pixel pxl;
Image *Img;
unsigned char RGBPix[3];
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

char tableauD[5][8] = {"DDDDD  \0",
                       "DD   D \0",
                       "DD   D \0",
                       "DD   D \0",
                       "DDDDD  \0"};

char tableauE[5][8] = {"EEEEEEE\0",
                       "EE     \0",
                       "EEEEE  \0",
                       "EE     \0",
                       "EEEEEEE\0"};

char tableauF[5][8] = {"FFFFFFF\0",
                       "FF     \0",
                       "FFFFF  \0",
                       "FF     \0",
                       "FF     \0"};

char tableauG[5][8] = {" GGGGG \0",
                       "GG     \0",
                       "GG  GGG\0",
                       "GG    G\0",
                       " GGGGG \0"};

char tableauH[5][8] = {"HH   HH\0",
                       "HH   HH\0",
                       "HHHHHHH\0",
                       "HH   HH\0",
                       "HH   HH\0"};

char tableauI[5][8] = {"IIIIII \0",
                       "  II   \0",
                       "  II   \0",
                       "  II   \0",
                       "IIIIII \0"};

char tableauJ[5][8] = {"JJJJJJ \0",
                       "   J   \0",
                       "   J   \0",
                       "J  J   \0",
                       " JJ    \0"};

char tableauK[5][8] = {"KK  KK \0",
                       "KK KK  \0",
                       "KKKKK  \0",
                       "KK  KK \0",
                       "KK   KK\0"};

char tableauL[5][8] = {"LL     \0",
                       "LL     \0",
                       "LL     \0",
                       "LL    L\0",
                       "LLLLLLL\0"};

char tableauM[5][8] = {"MM   MM\0",
                       "M M M M\0",
                       "M  M  M\0",
                       "M     M\0",
                       "M     M\0"};

char tableauN[5][8] = {"NN    N\0",
                       "N N   N\0",
                       "N  N  N\0",
                       "N   N N\0",
                       "N    NN\0"};

char tableauO[5][8] = {" OOOOO \0",
                       "OO   OO\0",
                       "O     O\0",
                       "OO   OO\0",
                       " OOOOO \0"};

char tableauP[5][8] = {"PPPPP  \0",
                       "PP   P \0",
                       "PPPPP  \0",
                       "PP     \0",
                       "PP     \0"};

char tableauQ[5][8] = {" QQQQQ \0",
                       "Q    Q \0",
                       "Q  Q Q \0",
                       " QQQQ  \0",
                       "    Q  \0"};

char tableauR[5][8] = {"RRRRR  \0",
                       "RR   R \0",
                       "RRRRR  \0",
                       "RR  R  \0",
                       "RR   R \0"};

char tableauS[5][8] = {" SSSSS \0",
                       "S      \0",
                       " SSSSS \0",
                       "      S\0",
                       " SSSSS \0"};

char tableauT[5][8] = {"TTTTTTT\0",
                       "   T   \0",
                       "   T   \0",
                       "   T   \0",
                       "   T   \0"};

char tableauU[5][8] = {"U     U\0",
                       "U     U\0",
                       "U     U\0",
                       "UU   UU\0",
                       " UUUUU \0"};

char tableauV[5][8] = {"       \0",
                       "V     V\0",
                       " V   V \0",
                       "  V V  \0",
                       "   V   \0"};

char tableauW[5][8] = {"W     W\0",
                       "W  W  W\0",
                       "W  W  W\0",
                       "W W W W\0",
                       " W   W \0"};

char tableauX[5][8] = {" X   X \0",
                       "  X X  \0",
                       "   X   \0",
                       "  X X  \0",
                       " X   X \0"};

char tableauY[5][8] = {"Y     Y\0",
                       " Y   Y \0",
                       "  Y Y  \0",
                       "   Y   \0",
                       "   Y   \0"};

char tableauZ[5][8] = {" ZZZZZ \0",
                       "    Z  \0",
                       "   Z   \0",
                       "  Z    \0",
                       " ZZZZZ \0"};

/**
* @fn void afficherAsciiArt(void)
* @brief Affiche AsciiArt
* @fn int main (void)
* @brief Fonction principale du programme.
* @param caractère
* @return 0 - Arrêt normal du programme.
*/

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
        afficherAsciiArt('D');
    case 'D' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauD[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('E');
    case 'E' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauE[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('F');
    case 'F' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauF[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('G');
    case 'G' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauG[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('H');
    case 'H' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauH[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('I');
    case 'I' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauI[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('J');
    case 'J' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauJ[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('K');
    case 'K' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauK[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('L');
    case 'L' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauL[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('M');
    case 'M' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauM[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('N');
    case 'N' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauN[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('O');
    case 'O' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauO[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('P');
    case 'P' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauP[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('Q');
    case 'Q' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauQ[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('R');
    case 'R' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauR[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('S');
    case 'S' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauS[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('T');
    case 'T' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauT[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('U');
    case 'U' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauU[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('V');
    case 'V' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauV[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('W');
    case 'W' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauW[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('X');
    case 'X' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauX[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('Y');
    case 'Y' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauY[i][j]);
            }
            printf("\n");
        }
        break;
    }
        afficherAsciiArt('Z');
    case 'Z' :
    {
        for (int i=0 ; i<5 ; i++) {
            for (int j=0 ; j<8 ; j++) {

                printf("%c", tableauZ[i][j]);
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


typedef struct BMPHead
{
    char signature[2];
    int taille;
    int rsv;
    int offsettim;
}

BMPHead;

typedef struct BMPimHead
{
    int size_imhead;
    int largeur;
    int hauteur;
    short nbplans;
    short bpp;
    int hres;
    int compression;
    int sizeim;
    int vres;
    int cpalette;
    int clpalette;
}

BMPimHead;


void AfficherInfoImageHead(BMPHead head)
{
    printf("Les premiers caracteres sont : %c et %c\n",head.signature[0],head.signature[1]);
    printf("La taille est de : %d octets\n",head.taille);
    printf("Le premier champ de reserve est : %d \n",head.rsv);
    printf("L'adresse de definition de l'image est : %d \n",head.offsettim);

}

void AfficherInfoImageimHead(BMPimHead imHead)
{
    printf("La taille de l'en-tete est de : %d octets \n",imHead.size_imhead);
    printf("La largeur de l'image est de : %d px\n",imHead.largeur);
    printf("La hauteur de l'image est de : %d px\n",imHead.hauteur);
    printf("Le nombre de plans est egale a : %hd \n",imHead.nbplans);
    printf("Le nombre de bits par pixel est de : %hd \n",imHead.bpp);
    printf("La compression est de : %d \n",imHead.compression);
    printf("La taille des donnees de l'image est de : %d octets\n",imHead.sizeim);
    printf("La resolution horizontale de l'image est de  : %d \n",imHead.hres);
    printf("La resolution verticale de l'image est de : %d \n",imHead.vres);
    printf("Le nombre de couleurs dans l'image est de : %d couleur(s)\n",imHead.cpalette);
    printf("Le nombre de couleurs importantes dans l'image est de : %d couleur(s)\n",imHead.clpalette);

}


/**
 * @fn chargerImage (void)
 * @brief affiche les premiers octets du fichier et sa taille.
 * @param fichier a ouvrir.
 * @return 0 - Arrêt normal du programme.
 */

Image *chargerImage (char *fichier);

Image *chargerImage(char *fichier)
{

    FILE *file;
    BMPHead head;
    BMPimHead imHead;

    //int j;
    //int i;

    printf("Nom du fichier a ouvrir: %s \n", fichier);
    file = fopen(fichier, "rb");
    if (!file)  {
        printf("Erreur ouverture \n");
        exit(-1);
    }
    int test = fread(&head, 14, 1, file);
    if(test != 1) {
        printf("fread impossible \n");
        exit(-1);
    }
    AfficherInfoImageHead(head);

    int testTaille = fread(&imHead, 40, 1, file);
    if (testTaille !=1){
        printf("fread impossible ! \n");
        exit(-1);
    }
    AfficherInfoImageimHead(imHead);

    Img = creerNouvelleImage(imHead.hauteur,imHead.largeur);
    fseek(file, imHead.size_imhead + 14, SEEK_SET); // Pour aller au début des données
    for(int j = 0; j< imHead.hauteur; j++){
        for(int i = 0; i<imHead.largeur; i++){
            int testLecture = fread(&pxl, 3, 1, file);
            if (testLecture != 1)  {
                printf("Erreur ouverture \n");
                exit(-1);

            }
            SetPixel(Img, i, Img->h - j - 1, pxl);
        }
    }

    fclose(file);

    return Img;

}


/**
 * @fn sauverAsciiArt(Image *Img, const char *fichier)
 * @brief sauvegarde l’AsciiArt de l’image.
 * @param l’image à sauvegarder et le nom du fichier de sauvegarde.
 * @return 0 - Arrêt normal du programme.
 */

int sauverAsciiArt(Image *Img, const char *fichier)
{
    FILE *F;
    Pixel p;
    int i;
    int j;
    unsigned char bgrpix[3];
    int couleurGris =0;
    unsigned char gris;
    /* Q12 Ouvrir Fichier */
    F= fopen(fichier, "w+");
    if (!F)
    {
        printf("Erreur ouverture \n");
    }
    for (j = 0; j < Img->h; j++) {
        for (i = 0; i < Img->w; i++) {
            p = GetPixel(Img, i, j);
            bgrpix[2] = p.r;
            bgrpix[1] = p.g;
            bgrpix[0] = p.b;
            /* Q13 Calculer niveau gris */
            couleurGris= (p.r + p.g + p.b)/3;  //Gris=(R+V+B)/3
            /* Q14 */
            if (couleurGris >= 0 && couleurGris <37)
            {
                fwrite("*",1,1,F);
            }
            else if (couleurGris > 36 && couleurGris <72)
            {
                fwrite("&",1,1,F);
            }
            else if (couleurGris > 71 && couleurGris <108)
            {
                fwrite("%",1,1,F);
            }
            else if (couleurGris > 107 && couleurGris <143)
            {
                fwrite("$",1,1,F);
            }
            else if (couleurGris > 142 && couleurGris <178)
            {
                fwrite("#",1,1,F);
            }
            else if (couleurGris > 177 && couleurGris <203)
            {
                fwrite("@",1,1,F);
            }
            else if (couleurGris > 202 && couleurGris <238)
            {
                fwrite("|",1,1,F);
            }
            else if (couleurGris > 237 && couleurGris <=255)
            {
                fwrite("+",1,1,F);
            }
        }
        fwrite("\n", 1, 1, F);
    }
    supprimerImage(Img);
    fclose(F);

    return 0;
}


/**
* @fn int main (void)
* @brief Fonction principale du programme.
* @param aucun paramètre.
* @return 0 - Arrêt normal du programme.
*/

int main()
{
    chargerImage("ImagesBmp/tux64.bmp");
    sauverAsciiArt(Img,"ImagesBmp/tux64.txt");

    return 0;
}

