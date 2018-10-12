/*
Q6 - Lista 3
Crie um vetor v com n inteiros, onde n é um valor inteiro fornecido pelo usuário. O vetor só deve
ser alocado na memória depois que o usuário fornecer o valor de n (utilize a função malloc() pra
isso). Depois disso, leia do teclado n inteiros e armazene em v. Depois disso, pergunte se o usuário
deseja inserir mais elementos, caso a resposta dele seja sim, leia a quantidade de elementos que
ele deseja adicionar e aumente o tamanho do vetor sem, no entanto, perder os valores já lidos
(utilize a função realloc() pra isso). Esse processo deve se repetir até que o usuário informe que
não deseja mais adicionar elementos ou a memória se esgote (faça um código que trate essa
ocorrência). Ao final, imprima todos os elementos fornecidos pelo usuário e libere a memória
(utilize a função free() pra isso).
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int n, i, nn;
	printf("Digite a quantidade de inteiros do seu vetor:\n");
	scanf("%d", &n);
	//Alocando espaço na memória:
	int *vetor = (int *) malloc(n*sizeof(int));
	for (i = 0; i < n; i++){
		printf("Digite o elemento %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	//Caso de memória insuficiente:
	if(vetor == NULL){
		printf("Memória insuficiente!\n");
		exit(1); //Interrompe programa
	}

	printf("Deseja adcionar mais elementos a lista?(s/n) ");
	char resp;
	scanf(" %c", &resp);
	//Loop para resposta positiva:
	while (resp == 's'){
		printf("Quantos elementos deseja adicionar?\n");
		scanf("%d", &nn);
		//Expandindo o espaço para memória para n + nn:
		n += nn;
		vetor = (int*) realloc(vetor, n*sizeof(int));
		for (i = n - nn; i < n; i++){
			printf("Digite o elemento %d do vetor: ", i);
			scanf("%d", &vetor[i]);
		}
		//Caso de memória insuficiente:
		if(vetor == NULL){
			printf("Memória insuficiente!\n");
			exit(1); //Interrompe programa
		}

		printf("Deseja adcionar mais elementos a lista?(s/n) ");
		scanf(" %c", &resp);		
	}
	printf("Sua lista de inteiros: ");
	for (i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	free(vetor);
	return 0;
}
