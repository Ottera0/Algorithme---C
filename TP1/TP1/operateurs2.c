#include <stdio.h>

int main() {
	int num1= 0, num2 = 0;
	char op ;

	printf("Entrez un premier nombre entier : ");
	scanf_s("%d", &num1);

	printf("\nEntrez un opérateur : ");
	int res = scanf("%c", &op);

	printf("\nEntrez le deuxième nombre entier : ");
	scanf_s("%d", &num2);

	switch (op)
	{
	case '+' : printf("addition : %d \n", num1 + num2);
		break;
	default:
		break;
	}
}