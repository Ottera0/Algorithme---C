#include <stdio.h>
#include <time.h>



//Ce programme affiche le chiffre le plus grand et le plus petit d'un tableau de 100 entiers rentrés aléatoirement.
int main(){
    //On crée un tableau de 100 entiers, puis on intialise nos variables et le randomizer.
    srand(time(NULL));
    int taille = 100
    int tab[taille];
    int min = 34000;
    int max =0;
    //On remplit le tableau de 100 entiers aléatoirement.
    for(int i=0;i<taille;i++){
        tab[i]=rand();
    }
    //On cherche le minimum et le maximum du tableau.
    for(int i=0;i<taille;i++){
        if(tab[i]<min){
            min=tab[i];
        }
        if(tab[i]>max){
            max=tab[i];
        }
    }
    //On affiche le minimum et le maximum du tableau.
    printf("Le plus petit chiffre est %d et le plus grand chiffre est %d",min,max);
    return 0;
}
    