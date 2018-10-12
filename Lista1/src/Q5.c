/*
Q5 - Lista 1
Escreva um programa em C que receba três números inteiros como entrada e imprima, como
saída: (i) o maior número recebido; e (ii) os números em ordem crescente.
*/

#include <stdio.h>

int main () {
	int n1, n2, n3, aux;
	printf("Escreva 3 números: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n3 > n2) {
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	if (n1 < n2 && n1 > n3) {
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	if (n1 < n3) {
		aux = n1;
		n1 = n2;
		n2 = aux;
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	printf("O maior número é: %d\nOrdem crescente: %d, %d, %d \n", n1, n3, n2, n1);
	return 0;
}
