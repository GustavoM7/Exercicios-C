/*
Programa com uso da TAD ponto
Deve ser compilado em objeto, para gerar executável ($ gcc -c ponto-main.c -o nome.o)
O executável é gerado pela ligação do objeto de ponto-tad.c e ponto main.c
($ gcc -o nome_executavel.bin nome_objeto_ponto-tad.o nome_objeto_ponto-main.o -lm)
*/

#include <stdio.h>
#include "ponto.h"

int main (){
	float x, y;
	printf("Lista 4, Questão 1\nTeste de TAD para ponto\nEntre as cordenadas do ponto:\nx = ");
	scanf("%f", &x);
	printf("y = ");
	scanf("%f", &y);

	Ponto *p = criaP(x, y);
	printf("Função 'criaP': Ponto (%.2f , %.2f) criado com sucesso!\n", x, y);

	float a, b;
	acessaP(p, &a, &b);
	printf("\nFunção 'acessaP': Ponto acessado!\na = %.2f , b = %.2f", a, b);

	float c, d;
	printf("\nEntre dois valores para teste da função 'atribuiP':\nPrimeiro = ");
	scanf("%f", &c);
	printf("Segundo = ");
	scanf("%f", &d);
	atribuiP(p, c, d);
	acessaP(p, &x, &y);
	printf("Valores atribuidos!\np.x = %.2f, p.y = %.2f\n", x, y);

	printf("Digite as coordenadas de um novo ponto para função 'distanciaP':\nx = ");
	float x2, y2;
	scanf("%f", &x2);
	printf("y = ");
	scanf("%f", &y2);

	Ponto *p2 = criaP(x2, y2);	

	printf("Função distanciaP:\nDistância entre os dois pontos = %.2f\n", distanciaP(p, p2));

	liberaP(p);
	liberaP(p2);
	printf("Função liberaP: Espaço lirado!\n");
	return 0;
}
