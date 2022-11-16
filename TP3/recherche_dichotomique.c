#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(){
    //Initialisation des variables
    int taille = 100;
    int tab[taille];
    srand(time(NULL));
    int i,j,tmp;
    int entier;
    
    
    bool found = false; 

    //On remplit le tableau de 100 entiers aléatoirement.
    for (int i = 0; i < taille; i++) {
        tab[i] = rand();
    }

    //On demande à l'utilisateur de rentrer un entier.
    printf("Entrez un entier a chercher : ");
    scanf("%d",&entier);

    int debut =0;
    int fin = taille;

    //on trie le tableau avec un tri a bulle croissant
    for(i=0;i<100 - 1;i++){

        for(j=0;j<100 - i - 1;j++){

            if(tab[j]>tab[j+1]){
                tmp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=tmp;
            }
        }
    }

    //On recherche la valeur avec une recherche dichotomique
    while(debut <= fin && !found){
        int milieu = (debut + fin)/2;
        if(tab[milieu] == entier){
            found = true;
            printf("entier present");
        }
        else if(tab[milieu] < entier){
            debut = milieu + 1;
        }
        else{
            fin = milieu - 1;
        }
    }

   
    return 0;

}
