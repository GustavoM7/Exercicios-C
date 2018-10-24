/* TAD: Quatrilatero (ponto,ponto,ponto,ponto) */
#include "ponto.h"

/* Tipo exportado */
typedef struct quatrilatero Quatrilatero;

/* Funções exportadas */
/* Função criaQ - Aloca e retorna um quatrilatero com base nos pontos */
Quatrilatero* criaQ(Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4);

/* Função liberaQ - Libera a memória de um quatrilatero previamente criado */
void liberaQ(Quatrilatero *q);

/* Função acessa - Retorna os valores dos pontos de um quatrilatero */
void acessaQ(Quatrilatero *q, Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4);

/* Função atribuiQ - Atribui novos valores aos pontos de um quatrilatero */
void atribuiQ(Quatrilatero *q, Ponto *p1, Ponto *p2, Ponto *p3, Ponto *p4);

/* Função pertenceQ - Retorna 1 se o ponto pertence ao quatrilatero ou 0, casocontrário */
int pertenceQ(Quatrilatero *q, Ponto *p);

/* Função areaQ - Retorna o cálculo da área do quatrilatero */
float areaQ(Quatrilatero *q);

