/*
Q10 - Lista 3
Escreva um programa que, dados uma matriz A de inteiros e um escalar α inteiro, calcule o
produto de A×α.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite o número de linhas da matriz: ");
	int n, m, i, j, numero; //Variáveis para numero de colunas, linhas, contadores e numero para produto.
	scanf("%d", &m);

	printf("Digite o número de colunas da matriz: ");
	scanf("%d", &n);

	int A[m][n]; //Matriz de inteiros gerada pelos numeros entrados.

	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("Digite o inteiro da linha %d e coluna %d: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("Digite um inteiro escalar para o produto: ");
	scanf("%d", &numero);
	printf("Resultado:");
	
	//Multiplicando dos os termos da matriz pelo numero:
	for (i = 0; i < m; i++){
		printf("\n");
		for (j = 0; j < n; j++){
			printf(" %d |", A[i][j] * numero);
		}
	}

	printf("\n");
	return 0;
}

