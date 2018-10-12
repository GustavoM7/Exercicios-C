/*
Funções para arquivo de descrição circulo.h
Deve ser compilado em objeto ($ gcc -c circulo-tad.c -o nome.o)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

typedef struct circulo {
	Ponto *ponto;
	float R;

} Circulo;

Circulo* criaC(Ponto* p, float raio){
	struct circulo* c;
	c = (struct circulo*) malloc(sizeof(struct circulo));
	c->ponto = p;
	c->R = raio;
	return c;
}

void liberaC(Circulo* c){
	free(c->ponto);
	free(c);
}

void acessaC(Circulo* c, float* x, float* y, float* r){
	acessaP(c->ponto, x, y);
	*r = c->R;
}

void atribuiC(Circulo* c, float x, float y, float r){
	atribuiP(c->ponto, x, y);
	c->R = r;	
}

int pertenceC(Circulo* c, Ponto* p) {
	float d = distanciaP(p, c->ponto);
	if (d < c->R)
		return 1;
	return 0;
}


float areaC(Circulo* c) {
	return (2 * 3.14 * (c->R) * (c->R));
}
