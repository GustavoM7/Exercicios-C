/* TAD: Triangulo (ponto,ponto,ponto) */
#include "ponto.h"

/* Tipo exportado */
typedef struct triangulo Triangulo;

/* Funções exportadas */
/* Função criaT - Aloca e retorna um triangulo com base nos pontos */
Triangulo* criaT(Ponto* p1, Ponto* p2, Ponto* p3);

/* Função liberaT - Libera a memória de um triangulo previamente criado */
void liberaT(Triangulo* t);

/* Função acessaT - Retorna os valores dos pontos de um triângulo */
void acessaT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3);

/* Função atribuiT - Atribui novos valores aos pontos de um triângulo */
void atribuiT(Triangulo* t, Ponto* p1, Ponto* p2, Ponto* p3);

/* Função verificaT - Retorna 1 se os pontos do triângulo atendem a condição de
existência e 0, caso contrário */
int verificaT(Triangulo* t);

/* Função areaT - Retorna o cálculo da área do triângulo */
float areaT(Triangulo* t);

/* Função pertenceT - Retorna 1 se o ponto pertence ao triângulo ou 0, caso contrário*/
int pertenceT(Triangulo* t, Ponto* p);
