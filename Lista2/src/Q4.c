/*
Q4 - Lista 2
Escreva as funções para calcular o volume e a área de uma esfera. (Dica: defina π como uma
constante #define Pi 3.14)
*/

#include <stdio.h>
#define Pi 3.14

float volume (int r) {
	return ((4 * Pi * r * r * r)/3);
}

float area (int r) {
	return  4 * Pi * r * r;
}

int main () {
	int raio;
	printf("Entre o valor do raio de uma esfera: ");
	scanf("%d", &raio);
	printf("Volume = %.2f\nArea = %.2f\n", volume(raio), area(raio));
	return 0;
}
