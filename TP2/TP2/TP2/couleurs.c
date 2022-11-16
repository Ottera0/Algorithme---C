#include <stdio.h>

//Initialisation des variables de la structure
struct Couleur{
        unsigned char red;
        unsigned char green;
        unsigned char blue;
        unsigned char alpha;
    };

int main(){
    
    //Remplissage des tableaux
    struct Couleur tableau[10];
    
    //Remplissage des valeurs pour la premiere couleur
    tableau[0].red = 0x00;
    tableau[0].green = 0x00;
    tableau[0].blue = 0x00;
    tableau[0].alpha = 0x00;

    //Remplissage des valeurs pour la deuxieme couleur
    tableau[1].red = 0xff;
    tableau[1].green = 0xff;
    tableau[1].blue = 0xff;
    tableau[1].alpha = 0x00;

    //Remplissage des valeurs pour la troisieme couleur
    tableau[2].red = 0xff;
    tableau[2].green = 0x00;
    tableau[2].blue = 0x00;
    tableau[2].alpha = 0x00;

    //Remplissage des valeurs pour la quatrieme couleur
    tableau[3].red = 0x00;
    tableau[3].green = 0xff;
    tableau[3].blue = 0x00;
    tableau[3].alpha = 0x00;

    //Remplissage des valeurs pour la cinquieme couleur
    tableau[4].red = 0x00;
    tableau[4].green = 0x00;
    tableau[4].blue = 0xff;
    tableau[4].alpha = 0x00;

    //Remplissage des valeurs pour la sixieme couleur
    tableau[5].red = 0x3f;
    tableau[5].green = 0x98;
    tableau[5].blue = 0xf5;
    tableau[5].alpha = 0x00;

    //Remplissage des valeurs pour la septieme couleur
    tableau[6].red = 0x06;
    tableau[6].green = 0xd0;
    tableau[6].blue = 0xa4;
    tableau[6].alpha = 0xff;

    //Remplissage des valeurs pour la huitieme couleur
    tableau[7].red = 0xef;
    tableau[7].green = 0xab;
    tableau[7].blue = 0x41;
    tableau[7].alpha = 0x00;

    //Remplissage des valeurs pour la neuvieme couleur
    tableau[8].red = 0xff;
    tableau[8].green = 0x00;
    tableau[8].blue = 0x00;
    tableau[8].alpha = 0xff;

    //Remplissage des valeurs pour la dixieme couleur
    tableau[9].red = 0x00;
    tableau[9].green = 0xff;
    tableau[9].blue = 0x00;
    tableau[9].alpha = 0xff;

    //Boucle pour afficher les couleurs et leurs 4 valeurs respectives
    for(int i = 0; i < 10; i++){
        printf("Couleur %d : R : %x G : %x B : %x A : %x\n", i+1, tableau[i].red, tableau[i].green, tableau[i].blue, tableau[i].alpha);
    }
}