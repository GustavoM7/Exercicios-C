/*
Q2 item b - Lista 2
Imprimir os primeiros n números primos, onde n é fornecido via teclado.
*/

#include <stdio.h>
#include <math.h>

int primo(int n) {
	if (n == 2) {
		return 1;
	} else if (n<2 || (n%2)==0) {
		return 0;
	} else {
		int lim = (int ) sqrt(n);
		for (int i=3; i<= lim; i+=2) {
			if (n% i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main () {
	int x, contador2 = 0, contador = 0;
	printf("Escreva um numero inteiro positivo: ");
	scanf("%d", &x);
	printf("%d primeiros primos:\n", x);
	while(contador < x){
		if (primo(contador2)){
			printf("%d\n", contador2);
			contador ++;
		}
		contador2 ++;
	}
	return 0;
}
