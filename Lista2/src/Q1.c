/*
Q1 - Lista 2
Implemente uma função iterativa (usando laço) para calcular o máximo divisor comum de dois
números inteiros positivos, MDC(x, y), usando o algoritmo de Euclides. Este algoritmo é baseado no
fato de que se o resto da divisão de x por y, representado por r, for igual a zero, y é o MDC. Se o
resto r for diferente de zero, o MDC de x e y é igual ao MDC de y e r. O processo se repete até que
o valor do resto da divisão seja zero.
*/

#include <stdio.h>

int  main () {
	int x, y, r;
	printf("Escreva dois números inteiros positivos: ");
	scanf("%d %d", &x, &y);
	//Para efeito da divisão, x sempre será maior que y
	if (y > x){
		int aux = x;
		x = y;
		y = aux;
	}
	r = x % y;
	while (r > 0){
		y = r;
		r = x % y;
	}
	printf("O resulta do MDC é: %d\n", y);
	return 0;
}
