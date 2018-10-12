/*
Q1 - Lista 1
Escreva um programa que, dado o valor do raio via teclado, calcule e imprima o volume da esfera correspondente.
*/


//Bibliotecas a serem utilizadas:
#include <stdio.h>
#include <math.h>

//Função principal 
int main () {
	float raio, volume, raioc; //Declaração de variável do tipo float (valor real)
	printf("Escreva o raio:");
	scanf("%f", &raio); //Leitura de valor do tipo float no endereço de memória do raio
	raioc = pow(raio, 3); //Função pow da biblioteca math.h, retorna raio³
	volume = (4 * 3.14 * raioc)/3;
	printf("O volume da esfera eh: %.2f\n", volume); //Volume escrito com duas casas decimais, '\n' pula para linha seguinte
	return 0; //Encerramento da função principal
}
