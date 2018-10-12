/*
Q8 - Lista3
Considere o programa desenvolvido na questão anterior e crie um função que ordene os elementos
da sequência de forma crescente (void ordena(int* sequencia)). Para auxiliar seu
trabalho, crie também uma função que faz a troca do conteúdo de dois elementos da sequência
(void troca(int* x, int* y)).
*/

#include <stdio.h>
#include <stdlib.h>

int tamanho (int *sequencia);
void troca(int* x, int* y);
void ordena(int *sequencia);

int main (){
	printf("Digite o tamanho da sequência: ");
	int n;
	scanf("%d", &n);
	int *sequencia = (int *) malloc(n*sizeof(int));
	for (int i = 0; i < n; i ++){
		printf("Digite o termo %d da sua sequência: ", i);
		scanf("%d", &sequencia[i]);
	}
	ordena(sequencia);
	printf("Sequência em ordem crescente:\n");
	for (int i = 0; i < n; i ++){
		printf("%d ", sequencia[i]);
	}
	printf("\n");
	return 0;
}

int tamanho(int *sequencia){
	int i = 0;
	while(sequencia[i]){
		i++;
	}
	return i;
}

void troca(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = *x;
}

void ordena(int *sequencia){
	int n = tamanho(sequencia);
	int *ponteirox, *ponteiroy;
	for (int i = 1; i < n; i ++){
		while (sequencia[i] < sequencia[i-1]){
			*ponteirox = sequencia[i];
			*ponteiroy = sequencia[i-1];
			troca(ponteirox, ponteiroy);
		}

	}
}
