#include <stdio.h>


int main()
{
    int d, i, j, k, b[32];
    printf("Entrez un entier: ");
    scanf("%d", &d);
    for(i = 0; d > 0; i++)
    {
        b[i] = d % 2;
        d = d / 2;
    }
    printf("Conversion en binaire: ");
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    return 0;

}