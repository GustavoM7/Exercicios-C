/*
Q13 - Lista 1
Escreva um programa para fazer o cálculo das raízes quadradas de uma equação do segundo grau
(ax ! + bx + c). (...)
*/

#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, delta, raiz1, raiz2;
	printf("Entre os coeficientes a, b e c da equacao de segundo grau:\n");
	scanf("%f %f %f", &a, &b, &c);
	delta = (b * b) - (4 * a * c);
	if (a == 0) {
		printf("Nao eh uma equacao de segundo grau.\n");
	} else if (delta == 0){
		raiz1 = -b / (2 * a);
		printf("Delta = 0\n X = %.2f \n", raiz1);
	} else if (delta > 0){
		raiz1 = (-b - sqrt(delta)) / (2 * a); //Função sqrt da biblioteca math.h retorna raiz do número
		raiz2 = (-b + sqrt(delta)) / (2 * a);
		printf("Delta = %.2f \nx' = %.2f\nx'' = %.2f\n", delta, raiz1, raiz2);
	} else {
		printf("Delta = %.2f\nA equacao nao possui raizes reais\n", delta);
	}
	return 0;
}
