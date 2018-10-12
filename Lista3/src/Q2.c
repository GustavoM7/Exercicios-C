/*
Q2 - Lista 1
Faça um programa que determina o máximo e o mínimo de um conjunto de n números inteiros
armazenados num vetor a de 10 elementos. Faça duas funções, uma que retorna o máximo e outra
que retorne o mínimo.
*/

#include <stdio.h>

int maximo(int n, int conjunto[n]){
	int M = conjunto[0];
	for (int i = 0; i <= n; i++){
		if (conjunto[i] > M){
			M = conjunto[i];
		}
	}
	return M;
}

int minimo(int n, int conjunto[n]){
	int m = conjunto[0];
	for (int i = 0; i <= n; i++){
		if (conjunto[i] < m){
			m = conjunto[i];
		}
	}
	return m;
}

int main (){
	int n;
	printf("Digite o tamanho do vetor de inteiros: ");
	scanf("%d", &n);
	int vetor[n];
	for (int i = 0; i <= n; i++){
		printf("Digite o termo %d do vetor\n", i);
		scanf("%d", &vetor[i]);
	}
	printf("O maximo será: %d\nE o minimo: %d\n", maximo(n, vetor), minimo(n, vetor));
	return 0;
}
