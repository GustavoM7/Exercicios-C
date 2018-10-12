/*
Q7 - Lista3
Crie um programa em C que lê uma sequência de n inteiros, onde n é um valor inteiro fornecido
pelo usuário. Depois disso, implemente uma função de busca (int buscar(int numero,
int* sequencia)) que recebe um número fornecido pelo usuário e verifica se esse número
encontra-se a sequência. Caso o número se encontre na sequencia, a função deve retornar seu
índice, caso contrario deve retornar -1. Com base no retorno da função de busca, informe se o
número buscado encontra-se na lista e, se afirmativo, em qual posição.
*/
#include <stdio.h>
#include <stdlib.h>

int buscar (int numero, int *sequencia);
int tamanho (int *sequencia);

int main (){
	printf("Digite o tamanho da sequência: ");
	int n;
	scanf("%d", &n);
	int *sequencia = (int *) malloc(n*sizeof(int));
	for (int i = 0; i < n; i ++){
		printf("Digite o termo %d da sua sequência: ", i);
		scanf("%d", &sequencia[i]);
	}
	printf("Digite um numero: ");
	int numero;
	scanf("%d", &numero);
	int resultado = buscar (numero, sequencia);
	if (resultado == -1){
		printf("Esse numero não se encontra na sequência.\n");
	} else {
		printf("Esse numero encontra-se no índice %d\n", resultado);
	}
	return 0;
}

int tamanho(int *sequencia){
	int i = 0;
	while(sequencia[i]){
		i++;
	}
	return i;
}

int buscar (int numero,int *sequencia){
	int t = tamanho(sequencia);
	for(int i = 0; i < t; i ++){
		if (numero == sequencia[i]){
			return i;
		}
	}
	return -1;
}
