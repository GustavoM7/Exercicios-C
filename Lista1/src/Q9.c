/*
Q9 - Lista 1
Escreva um programa C completo que capture os valores de s 0 , v 0 , a e t, fornecidos pelo usuário via
teclado, e calcule e exiba os valores de s e v.
*/

#include <stdio.h>

int main () {
	double si, vi, a, t, s, v;
	printf("Digite o espaco inicial: ");
	scanf("%lf", &si);
	printf("Digite a volocidade inicial: ");
	scanf("%lf", &vi);
	printf("Digite a aceleracao: ");
	scanf("%lf", &a);
	printf("Digite o tempo: ");
	scanf("%lf", &t);
	s = si + vi + (a * t * t)/2;
	v = vi + (a * t);
	printf("Espaco final: %.2lf\nVelocidade final: %.2lf\n", s, v);
	return 0;
}
