/*
Funções para arquivo de descrição quadrilatero.h
Deve ser compilado em objeto ($ gcc -c quadrilatero-tad.c -o nome.o)
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadrilatero.h"

struct quadrilatero {
	Ponto *a;
	Ponto *b;
	Ponto *c;
	Ponto *d;
};

Quatrilatero* criaQ(Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4){
	Quadrilatero *q = (struct quadrilatero*) malloc(sizeof(Quadrilatero)); 
	q->a = p1;
	q->b = p2;
	q->c = p3;
	q->d = p4;
};

void liberaQ(Quatrilatero* q){
	free(q->a);
	free(q->b);
	free(q->c);
	free(q->d);
	free(q);
};

void acessaQ(Quatrilatero *q, Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4){

};

void atribuiQ(Quatrilatero *q, Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4){
	q->a = p1;
	q->b = p2;
	q->c = p3;
	q->d = p4;
};

int pertenceQ(Quatrilatero *q, Ponto *p){

};


float areaQ(Quatrilatero *q){

};
