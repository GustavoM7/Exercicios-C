/*
Q11 - Lista 1
Escreva um programa que recebe como entrada três números inteiro a, b e c que representam os
lados de um triângulo, verifica se essas medidas satisfazem a condição de existência de um
triângulo – (i)|b - c| < a < b + c; (ii) |a - c| < b < a + c; e (iii) |a - b| < c
< a + b – e, caso essa condição seja satisfeita, imprime um texto dizendo se o triângulo é
escaleno (todos os lados diferentes), isósceles (apenas 2 lados iguais) ou equilátero (todos os lados
iguais). Caso contrário, imprima um texto informando que os valores fornecidos não satisfazem a
condição de ser triângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b, c;
	printf("Entre o valor inteiro de três lados: ");
	scanf("%d %d %d", &a, &b, &c);
	//Função abs da biblioteca stdlib, retorna o módulo:
	if (abs(b - c) < a && a < b + c && abs(a - c) < b && b < a + c && abs(a - b) < c && c < a + b){
		if (a == b && b == c){
			printf("São lados de um triângulo equilátero\n");
		}
		if (a != b && b != c){
			printf("São lados de um triângulo escaleno\n");
		}
		if ((a == b && b != c) || (c == a && a != b) || (c == b && b != a)){
			printf("São lados de um triangulo isóceles\n");
		}
	} else {
		printf("Esses lados não formam um triângulo\n");
	}
	return 0;
}
