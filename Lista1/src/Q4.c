/*
Q4 - Lista 1
Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e
R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e determine o menor
número de notas para se obter o montante fornecido. O programa deve exibir o número de notas
para cada um dos valores de nota existentes.
*/

#include <stdio.h>

int main () {
	int um, dois = 0, cinco = 0, dez = 0, vinte = 0, cinq = 0, cem = 0;
	printf("Escreva o valor total em reais:");
	scanf("%d", &um);
	while (um >= 100) {
		um -= 100;
		cem ++;
	}
	while (um >= 50) {
		um -= 50;
		cinq ++;
	}
	while (um >= 20) {
		um -= 20;
		vinte ++;
	}
	while (um >= 10) {
		um -= 10;
		dez ++;
	}
	while (um >= 5) {
		um -= 5;
		cinco ++;
	}
	while (um >= 2) {
		um -= 2;
		dois ++;
	}
	printf("Notas de 100: %d \nNotas de 50: %d \nNotas de 20: %d \nNotas de 10: %d \nNotas de 5: %d \nNotas de 2: %d \nNotas de 1: %d \n", cem, cinq, vinte, dez, cinco, dois, um);
	return 0;
}
