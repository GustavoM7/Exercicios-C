/*
Programa com uso da TAD circulo
Deve ser compilado em objeto, para gerar executável ($ gcc -c ponto-main.c -o nome.o)
O executável é gerado pela ligação do objeto de ponto-tad.c, circulo-tad e circulo-main.c
($ gcc -o nome_executavel.bin nome_objeto_ponto-tad.o nome_objeto_circulo-tad.o nome_objeto_circulo-main.o -lm)
*/


#include <stdio.h>
#include "circulo.h"
#include "ponto.h"

int main (){
	printf("Lista 4, Questão 2\nTeste de TAD para círculo\nEntre as cordenadas para o ponto central do círculo:\nx = ");
	float x, y, r;
	scanf("%f", &x);
	printf("y = ");
	scanf("%f", &y);

	Ponto *p = criaP(x, y);
	printf("(Ponto criado!)\n");

	printf("Entre o valor do raio do círculo:\nR = ");
	scanf("%f", &r);

	Circulo *c = criaC(p, r);
	printf("Função 'criaC': círculo criado com sucesso!\n");

	printf("Entre novos valores de coordenadas para testes da função 'atribuiC':\nx = ");
	float a, b, r2;
	scanf("%f", &a);
	printf("y = ");
	scanf("%f", &b);

	printf("Entre o valor do novo raio do círculo:\nR = ");
	scanf("%f", &r2);

	atribuiC(c, a, b, r2);
	printf("Função 'atribuiC': valores atribuidos com sucesso!\n");

	acessaC(c, &x, &y, &r);
	printf("Função 'acessaC': valores acessados com sucesso!\np = (%.2f , %.2f)\nRaio = %.2f\n", x, y, r);

	printf("Entre novos valores de coordenadas para um novo ponto para teste da função 'pertenceC':\nx = ");
	float d, e;
	scanf("%f", &d);
	printf("y = ");
	scanf("%f", &e);
	
	Ponto *p2 = criaP(d, e);
	printf("(Novo ponto criado!)\n");

	if(pertenceC(c, p) == 1)
		printf("Função 'pertenceC': o ponto pertence ao círculo!\n");
	else
		printf("Função 'pertenceC': o ponto não pertence ao círculo!\n");

	printf("Função 'areaC':\nÁrea = %.2f\n", areaC(c));

	liberaC(c);
	printf("Função 'liberaC': espaço liberado com sucesso!\n");

	return 0;
}
