/*
Funções para arquivo de descrição triangulo.h
Deve ser compilado em objeto ($ gcc -c triangulo-tad.c -o nome.o)
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"
#include "triangulo.h"


typedef struct triangulo {
	Ponto *a;
	Ponto *b;
	Ponto *c;
} Triangulo;


Triangulo* criaT(Ponto* p1, Ponto* p2, Ponto* p3){
	struct triangulo *t;
	t = (struct triangulo*) malloc(sizeof(struct triangulo));
	t->a = p1;
	t->b = p2;
	t->c = p3;
	return t;
};

void liberaT(Triangulo* t){
	free(t->a);
	free(t->b);
	free(t->c);
	free(t);
};

void acessaT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3){
	float x, y;

	acessaP(t->a, &x, &y);
	atribuiP(p1, x, y);

	acessaP(t->b, &x, &y);
	atribuiP(p2, x, y);

	acessaP(t->c, &x, &y);
	atribuiP(p3, x, y);
};

void atribuiT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3){
	float x, y;

	acessaP(p1, &x, &y);
	atribuiP(t->a, x, y);

	acessaP(p2, &x, &y);
	atribuiP(t->b, x, y);

	acessaP(p3, &x, &y);
	atribuiP(t->c, x, y);
};

int verificaT(Triangulo* t){
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
		return 1;
	return 0;
};


float areaT(Triangulo* t){
	//Fórmula de Héron:
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	float P = (l1 + l2 + l3)/2;
	P = (P - l1) * (P - l2) * (P - l3) * P;
	return sqrt(P);
};

int pertenceT(Triangulo* t, Ponto* p){
	float AO = areaT(t);
	Triangulo *t1 = criaT(t->a, t->c, p);
	float A1 = areaT(t1);
	liberaT(t1);
	Triangulo *t2 = criaT(t->a, t->b, p);
	float A2 = areaT(t2);
	liberaT(t2);
	Triangulo *t3 = criaT(t->b, t->c, p);
	float A3 = areaT(t3);
	liberaT(t3);

	if(AO == A1 + A2 + A3){
		return 1;
	}

	return 0;
};
