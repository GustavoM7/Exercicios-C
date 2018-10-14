/*
Programa com uso da TAD triangulo
Deve ser compilado em objeto, para gerar executável ($ gcc -c triangulo-main.c -o nome.o)
O executável é gerado pela ligação do objeto de ponto-tad.c, triangulo-tad e triangulo-main.c
($ gcc -o nome_executavel.bin nome_objeto_ponto-tad.o nome_objeto_triangulo-tad.o nome_objeto_triangulo-main.o -lm)
*/

#include <stdio.h>
#include "ponto.h"
#include "triangulo.h"

int main (){
	printf("Lista 4, Questão 3\nTeste de TAD para triângulo\nEntre as cordenadas para os pontos do triângulo:\nx1 = ");
	float x1, x2, x3, y1, y2, y3;
	scanf("%f", &x1);
	printf("y1 = ");
	scanf("%f", &y1);
	Ponto *a = criaP(x1, y1);
	printf("(Ponto 'a' criado!)\n");

	printf("x2 = ");
	scanf("%f", &x2);
	printf("y2 = ");
	scanf("%f", &y2);
	Ponto *b = criaP(x2, y2);
	printf("(Ponto 'b' criado!)\n");

	printf("x3 = ");
	scanf("%f", &x3);
	printf("y3 = ");
	scanf("%f", &y3);
	Ponto *c = criaP(x3, y3);
	printf("(Ponto 'c' criado!)\n");

	Triangulo *t = criaT(a, b, c);
	printf("Função 'criaT': Triangulo criado!\n");

	Ponto *p1 = criaP(0, 0);
	Ponto *p2 = criaP(0, 0);
	Ponto *p3 = criaP(0, 0);

	acessaT(t, p1, p2, p3);

	acessaP(p1, &x1, &y1);
	acessaP(p2, &x2, &y2);
	acessaP(p3, &x3, &y3);


	printf("Função 'acessaT': Triânculo acessado!\na(%.2f,%.2f)	b(%.2f,%.2f)	c(%.2f,%.2f)\n", x1, y1, x2, y2, x3, y3);

	printf("Entre as coordenadas para um novo triângulo\nx1 = ");
	scanf("%f", &x1);
	printf("y1 = ");
	scanf("%f", &y1);
	Ponto *d = criaP(x1, y1);
	printf("(Novo ponto 'a' criado!)\n");

	printf("x2 = ");
	scanf("%f", &x2);
	printf("y2 = ");
	scanf("%f", &y2);
	Ponto *e = criaP(x2, y2);
	printf("(Novo ponto 'b' criado!)\n");


	printf("x3 = ");
	scanf("%f", &x3);
	printf("y3 = ");
	scanf("%f", &y3);
	Ponto *f = criaP(x3, y3);
	printf("(Novo ponto 'c' criado!)\n");

	atribuiT(t, d, e, f);
	liberaP(a);
	liberaP(b);
	liberaP(c);
	printf("Função 'atribuiT': Pontos atribuídos!\n");

	printf("Função 'verificaT': ");

	if(verificaT(t) == 1){
		printf("As coordenadas formam um triângulo!\n");

		printf("Função 'areaT':\nÁrea = %.2f\n", areaT(t));

		printf("Digite as coordenadas de um ponto para verificar se pertence ao triângulo:\nx = ");
		float z, w;
		scanf("%f", &z);
		printf("y = ");
		scanf("%f", &w);
		
		Ponto *p = criaP(z, w);

		printf("Função 'pertenceT':");
		if (pertenceT(t , p) == 1){
			printf("O ponto pertence!");
		} else {
			printf("O ponto não pertence!");
		}

		liberaP(p);

	} else {
		printf("As coordenadas não formam um triângulo!\n");
		
	}

	liberaT(t);
	printf("Função 'liberaT': Triângulo liberado!\n");

	return 0;
}
