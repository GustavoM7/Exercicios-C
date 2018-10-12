/*
Q8 - Lista3
Dada uma matriz A de inteiros, escreva uma função que diga quantas vezes uma dado número
aparece na matriz (int repeticoes(int numero)).
*/

#include <stdio.h>
#include <stdlib.h>

int repeticoes(int numero, int linha, int coluna, int matriz[linha][coluna]);

int main(){
	printf("Digite o número de linhas da matriz: ");
	int m, n, i, j, numero; //Variáveis para numero de linhas, numero de colunas, contadores.
	scanf("%d", &m);
	printf("Digite o número de colunas da matriz: ");
	scanf("%d", &n);

	int A[m][n]; //Matriz de inteiros criado pelos numeros entrados.

	//Preenchendo matriz:
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("Digite o inteiro da linha %d e coluna %d: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("Digite um numero para análise: ");
	scanf("%d", &numero);
	printf("Esse número se repete %d vezes na matriz.\n", repeticoes(numero, m, n, A));

	return 0;
}

int repeticoes(int numero, int linha, int coluna, int matriz[linha][coluna]){
	int vezes = 0, i, j; //Variável de retorno e contadores.

	//Percorrendo matriz:
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){

			//Incrementando numero de retorno sempre que for encontrado na matriz:
			if (numero == matriz[i][j]){
				vezes++;
			}
		}
	}
	return vezes;
}
