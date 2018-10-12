#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"
#include "triangulo.h"


typedef struct triangulo {
	Ponto a;
	Ponto b;
	Ponto c;
} Triangulo;


Triangulo* criaT(Ponto* p1, Ponto* p2, Ponto* p3){
	struct triangulo *t;
	t = (struct triangulo*) malloc(sizeof(struct triangulo));
	t->a = *p1;
	t->b = *p2;
	t->c = *p3;
	return t;
};

void liberaT(Triangulo* t){
	free(t->a);
	free(t->b);
	free(t->c);
	free(t);
};

void acessaT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3){
	*p1 = t->a;
	*p2 = t->b;
	*p3 = t->c;
};

void atribuiT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3){
	t->a = *p1;
	t->b = *p2;
	t->c = *p3;
};

int verificaT(Triangulo* t){
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
		return 1;
	return 0;
};



int pertenceT(Triangulo* t, Ponto* p){

};


float areaT(Triangulo* t){
	float l1 = distanciaP(t->a, t->b);
	float l2 = distanciaP(t->b, t->c);
	float l3 = distanciaP(t->a, t->c);
	float P = (l1 + l2 + l3)/2
	return (sqrt(P * (P - l1) * (P - l2) * (P - l3)));
};
