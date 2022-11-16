#include <stdio.h>


void fibonacci_iterative(int n) {

int U0 = 0, U1 = 1, Un;
if (n == 0 || n == 1) {
printf("%d",n);
}
else {
for (int i = 0; i < n; i++) {

if (i <= 1) {
Un = i;
}
else {
Un = U0 + U1;
U0 = U1;
U1 = Un;
}
printf("%d ", Un);
}
}

}

int main() {

int n, i= 0;

printf("entrez un nombre n : ");
scanf_s("%d", &n);

printf("\n%d premiers termes de la suite Fibonacci : ", n);
fibonacci_iterative(n);

return 0;
}