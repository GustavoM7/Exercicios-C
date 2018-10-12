/*
Q5 - Lista 3
Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números
inteiros de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros.
*/

#include <stdio.h>

int main (){
	int n, i;
	printf("Digite o tamanho das sequências: ");
	scanf("%d", &n);
	int vetora[n], vetorb[n], resultado[n + 1];
	printf("Digite os %d algarismos da primeira sequência: ", n);
	for (i = 0; i < n; i++){
		scanf("%d", &vetora[i]);
	}
	printf("Digite os %d algarismos da segunda sequência: ", n);
	for (i = 0; i < n; i++){
		scanf("%d", &vetorb[i]);
	}
	for (i = 0; i < n + 1; i++){
		resultado[i] = 0;
	}
	//Somando termo a termo e adicionando ao vetor resultado:
	int soma = 0;
	for (i = 0; i < n; i++){
		soma = vetora[i] + vetorb[i];
		if (soma >= 10){
			resultado[i + 1] += soma - 10;
			resultado[i] += 1;
		} else {
			resultado[i + 1] += soma;
		}
	}

	printf("Resultado: \n\n  ");
	for (i = 0; i < n; i++){
		printf("%d ", vetora[i]);
	}
	
	printf("\n+ ");
	for (i = 0; i < n; i++){
		printf("%d ", vetorb[i]);
	}
	printf("\n");
	for (i = 0; i < n + 1; i++){
		printf("__");
	}
	printf("\n");
	for (i = 0; i < n + 1; i++){
		printf("%d ", resultado[i]);
	}

	printf("\n");
	return 0;
}
