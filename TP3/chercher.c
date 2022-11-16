#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int entier;
    int taille = 100;
    int tab[taille];

    //On remplit le tableau de 100 entiers aléatoirement.
    for(int i=0;i<taille;i++){
        tab[i]=rand();
    }
    //On demande à l'utilisateur de rentrer un entier.
    printf("Entrez un entier a chercher : ");
    scanf("%d",&entier);

    //On parcourt le tableau.
    for(int i = 0; i < taille; i++){
        //Condition qui vérifie la présence de l'entier dans le tableau.
        if(tab[i]==entier){
            printf("entier present");
            return 0;
        }
    }
}