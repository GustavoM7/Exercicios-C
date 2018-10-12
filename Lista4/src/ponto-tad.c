/*
Funções para arquivo de descrição ponto.h
Deve ser compilado em objeto ($ gcc -c ponto-tad.c -o nome.o)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

//Definindo tipo 'Ponto' como uma estrutura com cordenadas x, e y:
typedef struct ponto {
	float x;
	float y;
} Ponto;

//Função retorna ponteiro tipo Ponto
Ponto* criaP(float x, float y){
	struct ponto* p; //p é uma variável ponteiro com estrutura de ponto
	p = (struct ponto*) malloc(sizeof(struct ponto));
	p->x = x; //cordenada x de p recebe x do parâmentro da função
	p->y = y;
	return p;
};

void liberaP(Ponto* p){
	free(p);
};

void acessaP(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
};

void atribuiP(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
};

float distanciaP(Ponto* p1, Ponto* p2){
	float dx = (p1->x) - (p2->x);
	dx = abs(dx);
	float dy = (p1->y) - (p2->y);
	dy = abs(dy);
	return sqrt(dx*dx + dy*dy);
};
