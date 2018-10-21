/*
Funções para arquivo de descrição ponto.h
Deve ser compilado em objeto ($ gcc -c ponto-tad.c -o nome.o)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

//Definindo propriedaes da estrutura do tipo 'Ponto':
struct ponto {
	float x;
	float y;
};

//Função retorna ponteiro tipo Ponto
Ponto* criaP(float x, float y){
	Ponto *p = (struct ponto*) malloc(sizeof(struct ponto)); //p é uma variável ponteiro com estrutura de ponto
	p->x = x; //cordenada x de p recebe x do parâmentro da função
	p->y = y;
	return p;
};

void liberaP(Ponto* p){
	free(p);
};

void acessaP(Ponto *p, float *x, float *y){
	*x = p->x; //Ponteiro x do parâmetro recebe valor de x atributo de p
	*y = p->y; 
};

void atribuiP(Ponto *p, float x, float y){
	p->x = x; //x atributo de p recebe valor do parâmetro
	p->y = y; 
};

float distanciaP(Ponto *p1, Ponto *p2){
	float x1, y1, x2, y2;
	acessaP(p1, &x1, &y1);
	acessaP(p2, &x2, &y2);
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));	
};
