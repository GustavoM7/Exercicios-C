/*
Q1 - Lista 1
Escreva um programa que calcule o preço da gasolina por litro no Brasil se aqui fosse adotado o
mesmo preço cobrado nos Estados Unidos.
*/

#include <stdio.h>

int main () {
	float valor, taxa, litro;
	printf("Escreva o preço do galão de gasolina em dólares nos EUA:\n");
	scanf("%f", &valor);
	printf("Escreva o valor da taxa de converção do dolar em real:\n");
	scanf("%f", &taxa);
	litro = (valor * taxa)/3.7854;
	printf("O preço do litro de gasolina em reais é de: %.3f \n", litro);
	return 0;
}
