/*
Q3 - Lista 3
Durante uma corrida automobilística com N voltas de duração, foram anotados para um piloto, na
ordem, os tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N
voltas, guardar em um vetor, implementar funções para calcular e imprimir: (i) melhor tempo; (ii) a
volta em que o melhor tempo ocorreu; (iii) pior tempo; (iv) a volta em que o pior tempo ocorreu; e
(v) o tempo médio das N voltas.
*/

#include <stdio.h>

int ptempo(int n, int vetor[n]){
	int pior = vetor[0];
	for (int i = 1; i < n; i ++){
		if (vetor[i] > pior){
			pior = vetor[i];
		}
	}
	return pior;
}

int volta(int n, int vetor[n], int tempo){
	int volta = 0;
	while (tempo != vetor[volta]){
		volta++;
	}
	return (volta + 1);
}

int mtempo(int n, int vetor[n]){
	int melhor = vetor[0];
	for (int i = 1; i < n; i++){
		if (vetor[i] < melhor){
			melhor = vetor[i];
		}
	}
	return melhor;
}

float media(int n, int vetor[n]){
	float media;
	for (int i = 0; i < n; i++){
		 media += vetor[i];
	}
	return (media/n);
}

int main (){
	int n;
	printf("Entre o numero de voltas: ");
	scanf("%d", &n);
	int vetor[n];
	for (int i = 0; i < n; i++){
		printf("Escreva o tempo da volta %d em segundos: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	int tempor = ptempo(n, vetor);
	int tempob = mtempo(n, vetor);
	int voltar = volta(n, vetor, tempor);
	int voltab = volta(n, vetor, tempob);
	float M = media(n, vetor);
	printf("(i) Melhor tempo: %d\n(ii) Volta do melhor tempo: %d\n(iii) Pior tempo: %d\n(iv) Volta do pior tempo: %d\n(v) Media dos tempo: %.2f\n", tempob, voltab, tempor, voltar, M);
	return 0;
}
