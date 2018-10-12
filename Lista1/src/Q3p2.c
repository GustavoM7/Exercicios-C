/*
Q3 - Lista 1 (segunda parte)
Escreva um programa que converta um valor de ângulo dado em 
radianos para o valor correspondente expresso em graus, minutos e
segundos. Sabe-se que 1 radiano equivale a 57.29578 graus.
Escolha um formato de saída apropriado.
*/

#include <stdio.h>

int main () {
	float radianos, grau, min, seg;
	printf("Digite o valor do ângulo em radianos:");
	scanf("%f", &radianos);
	seg = radianos * 57.29578 * 3600;
	grau = 0;
	min = 0;
	while (seg >= 60) {
		seg -= 60;
		min ++;
	}

	while (min >= 60) {
		min -= 60;
		grau ++;
	}

	printf("Conversão: %.0fº %.0f' %.2f'' \n", grau, min, seg);
	return 0;
}
