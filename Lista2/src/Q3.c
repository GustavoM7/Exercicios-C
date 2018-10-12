/*
Q3 - Lista 2
O máximo divisor comum de três números inteiros positivos, MDC(x,y,z), é igual a
MDC(MDC(x,y),z)
*/
#include <stdio.h>

int mdc (int x, int y){
	if (x % y == 0) {
		return y;
	}
	return mdc (y, x % y);
}

//Procedimento para ordenação crescente dos valores para efeito de cálculo
void ordena (int *n1, int *n2, int *n3);

int main () {
	int x, y, z;
	printf("Entre três valore para cálculo de MDC: ");
	scanf("%d %d %d", &x, &y, &z);
	ordena(&x, &y, &z);
	int r = mdc(x, y);
	if (z > r)
		r = mdc(z , r);
	else
		r = mdc(r, z);
	printf("Resultado: %d\n", mdc(mdc(x,y),z));
	return 0;
}


void ordena (int *n1, int *n2, int *n3) {
	int aux;
	if (*n3 > *n2) {
		aux = *n2;
		*n2 = *n3;
		*n3 = aux;
	}
	if (*n1 < *n2 && *n1 > *n3) {
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}
	if (*n1 < *n3) {
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
		aux = *n2;
		*n2 = *n3;
		*n3 = aux;
	}
}

