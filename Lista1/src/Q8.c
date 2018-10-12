/*
Q8 - Lista 1

Escreva um programa que converta coordenadas polares (raio r e ângulo a) em coordenadas
cartesianas (abscissa x e ordenada y)
*/

#include <stdio.h>
#include <math.h>

int main () {
	float raio, angulo, x, y;
	printf("Escreva o raio seguido angulo da coordenada polar: ");
	scanf("%f %f", &raio, &angulo);
	x = raio * cos(angulo);
	y = raio * sin(angulo);
	printf("Abscissa: %.2f\nOrdenada: %.2f\n", x, y);
	return 0;
}
