//#include <stdio.h>
//
//int main() {
//
//	int limite = 1000;
//
//	printf("Nombres divisibles par 2 et 15 : \n");
//	for (int i = 1; i < limite; i++) {
//		if(i%2 ==0 && i%15 ==0){
//			printf("%d\n", i);
//		}
//	}
//
//	printf("\nNombres divisibles par 103 ou 107 : \n");
//	for (int i = 1; i < limite; i++) {
//		if (i % 103 == 0 || i % 107 == 0) {*ù
//			printf("%d\n", i);
//		}
//	}
//
//	printf("Nombres divisibles par 7 ou 5, mais pas 3 : \n");
//	for (int i = 1; i < limite; i++) {
//		if ((i % 7 == 0 || i % 5 == 0) && i%3 != 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}