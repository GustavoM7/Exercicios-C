/*
Q4 - Lista 3
Crie um programa em C que possua dois vetores de inteiros (a[] e b[]) cada um com a capacidade
de 10 elementos. O programa deve permitir que seja lido via teclado os dez elementos de cada
vetor. Além disso, o programa possui uma função que calcula o produto escalar dos dois vetores
*/
#include <stdio.h>

int prodescalar (int n, int vetora[n], int vetorb[n]){
	int produto = 0;
	for (int i = 0; i < n; i++){
		produto = produto + (vetora[i] * vetorb[i]);
	}
	return produto;
}

int main (){
	int vetora[10], vetorb[10];
	for (int i = 0; i < 10; i ++){
		printf("Digite o termo %d de a[]: ", i);
		scanf("%d", &vetora[i]);
		printf("Digite o termo %d de b[]: ", i);
		scanf("%d", &vetorb[i]);
	}
	printf("Produto Escalar = %d\n", prodescalar(10, vetora, vetorb));
	return 0;
}
