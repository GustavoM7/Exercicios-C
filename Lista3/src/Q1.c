/*
Q1 - Lista 3
Dado dois vetores, a (5 elementos) e b (8 elementos), faça um programa em C que imprima todos
os elementos comuns aos dois vetores.
*/

#include <stdio.h>

int main (){
	int a[5], b[8], i, j;
	//Preenchendo o vetor a:
	for (i = 0; i < 5; i++){
		printf("Lista a, elemento %d (número inteiro):\n", i + 1);
		scanf("%d", &a[i]);
	}
	//Preenchendo vetor b:
	for (i = 0; i < 8; i++){
		printf("Lista b, elemento %d (número inteiro):\n", i + 1);
		scanf("%d", &b[i]);
	}
	//Comparando elementos:
	for (i = 0; i < 5; i++){
		for (j = 0; j < 8; j++){
			if (a[i] == b[j]){
				printf("%d é comum aos vetores\n", b[j]);
			}
		}
	}
	return 0;
}
