/*
Q7 - Lista 2
Escreva uma função de potenciação recursiva, considerando o expoente como sendo um valor
inteiro positivo...
*/
#include <stdio.h>
#include <math.h>

double pot (double x, int k) {
	if (k == 1){
		return x;
	}
	return pot(x, k-1) * x;
}

int main () {
	double base, result1, result2;
	int expoente;
	printf("Entre uma base e um expoente: ");
	scanf("%lf %d", &base, &expoente);
	result1 = pot(base, expoente);
	result2 = pow(base, expoente);
	printf("Funcao pot: %.2lf\nFuncao pow: %.2lf\n", result1, result2);
	return 0;
}
