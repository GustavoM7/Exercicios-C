/*
Funções para arquivo de descrição circulo.h
Deve ser compilado em objeto ($ gcc -c circulo-tad.c -o nome.o)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

struct circulo {
	Ponto *ponto;
	float R;
};

Circulo* criaC(Ponto *p, float raio){
	Circulo *c = (struct circulo*) malloc(sizeof(struct circulo));
	c->ponto = p;
	c->R = raio;
	return c;
};

void liberaC(Circulo* c){
	free(c->ponto);
	free(c);
};

void acessaC(Circulo *c, float *x, float *y, float *r){
	acessaP(c->ponto, x, y);
	*r = c->R;
};

void atribuiC(Circulo *c, float x, float y, float r){
	atribuiP(c->ponto, x, y);
	c->R = r;	
};

int pertenceC(Circulo *c, Ponto *p) {	
	if (distanciaP(p, c->ponto) < c->R) {
		return 1;
	} else
	return 0;
};


float areaC(Circulo* c) {
	return (3.14 * (c->R) * (c->R));
};
