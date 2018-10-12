/*
Q3 - Lista 1 (primeira parte)
Escreva um programa que capture do teclado o número de segundos transcorridos num evento e
imprima o tempo no formato hora-minuto-segundo: h:m:s, onde hora e minuto são exibidos com
dois dígitos, preenchidos com zero à esquerda ("%02 d"), e segundo exibido com duas casas
decimais, também preenchido com zero à esquerda ( %05.2 f)
*/

#include <stdio.h>

int main () {
	float horas, minutos, segundos;
	printf("Escreva o tempo total em segundos: ");
	scanf("%f", &segundos);
	minutos = 0.0;
	horas = 0.0;
	while (segundos >= 60) {
		segundos -= 60;
		minutos ++;
	}

	while (minutos >= 60) {
		minutos -= 60;
		horas ++;
	}

	printf("Conversão:\n%02.0f : %02.0f : %05.2f \n", horas, minutos, segundos);
	return 0;
}
