/*
Q12 - Lista 1
Escreva um programa que funcione como uma calculadora simples. A calculadora deve receber
três parâmetros os dois operandos (números) e um operador (caractere). O usuário deve inserir os
dados no seguinte formato: <operando> <operador> <operando>. A calculadora deve suportar as
quatro operações básicas: soma (+), subtração (−), multiplicação (×) e divisão (÷). O programa
deve imprimir o resultado da operação selecionada. Use a estrutura de casos (switch) para
implementar a sua solução. (Dica: não se esqueça de tratar os casos de divisão por zero).
*/

#include <stdio.h>

int main () {
	float opnd1, opnd2;
	char oper;
	printf("Calculadora simples de C\nEntre o primeiro operando, seguido de operador (+, -, x, :) e segundo operando:\n");
	scanf("%f %s %f", &opnd1, &oper, &opnd2);
	switch (oper) {
		case '+':
			printf("Resultado = %.2f\n", opnd1 + opnd2);
			break;
		case '-':
			printf("Resultado = %.2f\n", opnd1 - opnd2);
			break;
		case 'x':
			printf("Resultado = %.2f\n", opnd1 * opnd2);
			break;
		case ':':
			if (opnd2 == 0) {
				printf("Operação inválida!\n");
				break;
			}
			printf("Resultado = %.2f\n", opnd1 / opnd2);
			break;
		default:
			printf("Operador inválido!\n");
			break;
	}
	return 0;
}
