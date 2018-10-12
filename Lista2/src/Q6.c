/*
Q6 - Lista 2
Escreva um programa para fazer o cálculo das raízes quadradas de uma equação do segundo grau
*/

#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c){
	return (b * b) - (4 * a * c);
}

//função retorna um valor inteiro, que eh o numero de raizes
int raizes (double a, double b, double c, double *px1, double *px2){
	double d = delta(a, b, c);
	if (d == 0){
		//resultado vai para fora do escopo da função através dos ponteiros
		*px1 = -b / (2 * a);
		*px2 = -b / (2 * a);
		return 1; //numero de raizes;
	} else if (d > 0){
		*px1 = (-b - sqrt(d)) / (2 * a);
		*px1 = (-b + sqrt(d)) / (2 * a);
		return 2; //numero de raizes;
	} else {
		return 0;
	}
}

int main () {
	double a, b, c, *ponteiro1, *ponteiro2, x1, x2;
	int num;
	printf("Entre os valoes a, b e c da equacao de 2o grau: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	ponteiro1 = &x1; //Ponteiro 1 apontará para x1
	ponteiro2 = &x2; //Valor recebido pelo ponteiro sera transferido para o endereço de x1
	num = raizes(a, b, c, ponteiro1, ponteiro2);
	printf("Essa equacao tem %d raiz(es), x' = %.2lf, x'' = %.2lf\n", num, x1, x2);
	return 0;
}
