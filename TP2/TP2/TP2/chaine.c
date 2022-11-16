#include <stdio.h>

//calculer nombre de caractères a taille dans une chaine de caractères

void concat(char *chaine1, char *chaine2, char *chaine3) {
    int i = 0, j = 0;
    while (chaine1[i] != '\0') {
        chaine3[i] = chaine1[i];
        i++;
    }
    while (chaine2[j] != '\0') {
        chaine3[i] = chaine2[j];
        i++;
        j++;
    }
    chaine3[i] = '\0';
}



int main()
{
    char chaine[100];
    char chaineCopie[100];
    char chaineConcat[200];
    int i = 0, j = 0;
    printf("Entrez une chaine de caracteres: ");
    scanf("%s", chaine);
    while (chaine[i] != '\0')
    {
        chaineCopie[i] = chaine[i];
        i++;
    }

    printf("La chaine de caracteres contient %d caracteres", i);

    printf("\nLa chaine copiee est : ");
    for(j; j < i; j++)
    {
        printf("%c", chaineCopie[j]);
    }
    
    printf("\nLa chaine concatenee avec la chaine copiee est : ");
    for(int k = 0; k<i; k++)
    {
        chaineConcat[k] = chaine[k];
    }
    for(int l = 0; l<j; l++)
    {
        chaineConcat[i+l] = chaineCopie[l];
    }
    for(int m = 0; m<i+j; m++)
    {
        printf("%c", chaineConcat[m]);
    }
    return 0;
}



