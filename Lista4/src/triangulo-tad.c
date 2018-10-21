/*
Funções para arquivo de descrição triangulo.h
Deve ser compilado em objeto ($ gcc -c triangulo-tad.c -o nome.o)
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangulo.h"


struct triangulo {
	Ponto *a;
	Ponto *b;
	Ponto *c;
};


Triangulo* criaT(Ponto *p1, Ponto *p2, Ponto *p3){
	Triangulo *t = (struct triangulo*) malloc(sizeof(struct triangulo));
	t->a = p1;
	t->b = p2;
	t->c = p3;
	return t;
};

void liberaT(Triangulo *t){
	free(t->a);
	free(t->b);
	free(t->c);
	free(t);
};

void acessaT(Triangulo *t, Ponto *p1, Ponto *p2, Ponto *p3){
	float x, y;

	acessaP(t->a, &x, &y);
	atribuiP(p1, x, y);

	acessaP(t->b, &x, &y);
	atribuiP(p2, x, y);

	acessaP(t->c, &x, &y);
	atribuiP(p3, x, y);
};

void atribuiT(Triangulo *t, Ponto *p1, Ponto *p2, Ponto *p3){
	float x, y;

	acessaP(p1, &x, &y);
	atribuiP(t->a, x, y);

	acessaP(p2, &x, &y);
	atribuiP(t->b, x, y);

	acessaP(p3, &x, &y);
	atribuiP(t->c, x, y);
};

int verificaT(Triangulo *t){
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
		return 1;
	return 0;
};


float areaT(Triangulo *t){
	//Fórmula de Héron:
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	float P = (l1 + l2 + l3)/2;
	return sqrt((P - l1) * (P - l2) * (P - l3) * P);
};

int pertenceT(Triangulo *t, Ponto *p){
	Triangulo *t1 = criaT(t->a, t->b, p);

	Triangulo *t2 = criaT(t->a, t->c, p);

	Triangulo *t3 = criaT(t->b, t->c, p);

	if(areaT(t) == areaT(t1) + areaT(t2) + areaT(t3))
		return 1;

	return 0;
};
