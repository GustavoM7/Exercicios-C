/*
Q2 item a - Lista 2
Imprimir todos os números primos menores que um valor x, fornecido via teclado.
*/

#include <stdio.h>
#include <math.h>

int primo(int n) {
	if (n == 2) {
		return 1;
	} else if (n<2 || (n%2)==0) {
		return 0;
	} else {
		int lim = (int ) sqrt(n);
		for (int i=3; i<= lim; i+=2) {
			if (n% i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main () {
	int x, resultado, contador = 0;
	printf("Escreva um numero inteiro positivo:");
	scanf("%d", &x);
	printf("Primos menores que %d:\n", x);
	while(contador < x) {
		if (primo(contador)){
			printf("%d\n", contador);
		}
		contador ++;
	}
	return 0;
}
