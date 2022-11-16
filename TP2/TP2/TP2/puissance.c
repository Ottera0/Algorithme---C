#include<stdio.h>

//prend deux entiers et calcule la valeur de la puissance
int puissance(int a, int b)
{
    int i, res = 1;
    for(i = 0; i < b; i++)
    {
        res = res * a;
    }
    return res;
}

int main()
{
    int a, b;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &a, &b);
    printf("%d puissance %d = %d", a, b, puissance(a, b));
    return 0;
}