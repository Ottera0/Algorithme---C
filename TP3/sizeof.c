#include <stdio.h>

int main(){
    printf("Taille en octets : ");
    printf("\nint : %d",sizeof(int));
    printf("\nint* : %d",sizeof(int*));
    printf("\nint** : %d",sizeof(int**));
    printf("\nchar* : %d",sizeof(char*));
    printf("\nchar** : %d",sizeof(char**));
    printf("\nchar*** : %d",sizeof(char***));
    printf("\nfloat* : %d",sizeof(float*));
    printf("\nfloat** : %d",sizeof(float**));
    printf("\nfloat*** : %d",sizeof(float***));
    return 0;
}
