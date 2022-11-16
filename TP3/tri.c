#include <stdio.h>
#include <time.h>

//On crée un tableau de 100 entiers, puis on les trie par ordre croissant avec un tri rapide.

void echange(int* a, int* b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

//fonction de tri rapide
void quicksort(int tab[], int first, int last) {
    int pivot, i, j;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        //on parcourt le tableau, on cherche plus petit que le pivot, puis plus grand que le pivot. On permute si nécessaire
        while (i < j) {
            while (tab[i] <= tab[pivot] && i < last)
                i++;
            while (tab[j] > tab[pivot])
                j--;
            if (i < j) {
                echange(&tab[i], &tab[j]);
            }
        }
        echange(&tab[pivot], &tab[j]);
        //On répète l'opération sur les deux parties du tableau
        quicksort(tab, first, j - 1);
        quicksort(tab, j + 1, last);
    }
}


int main() {
    int taille = 100;
    int tab[taille];
    srand(time(NULL));
    //on remplit le tableau de 100 entiers aléatoirement.
    for (int i = 0; i < 100; i++) {
        tab[i] = rand();
    }
    //on trie le tableau par ordre croissant.
    quicksort(tab, 0, taille - 1);
    //on affiche le tableau trié.
    for (int i = 0; i < taille; i++) {
        printf("\n%d ", tab[i]);
    }
    return 0;
}