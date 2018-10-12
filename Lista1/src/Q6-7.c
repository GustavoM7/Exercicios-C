/*
Q6 e 7 - Lista 1
Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas
(P1 e P2) iniciais; se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas
for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira prova (P3) e a
média é calculada considerando-se a terceira nota e a maior das notas entre P1 e P2. Neste caso, o
aluno é aprovado se a média final for maior ou igual a 5.0.

Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo
usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve
capturar a nota da terceira prova, também fornecida via teclado. Como saída, o programa deve
imprimir a média final do aluno, seguida da mensagem “Aprovado” ou “Reprovado”, conforme o
critério descrito aqui.


*/


#include <stdio.h>

int main () {
	float nota1, nota2, nota3, aux;
	printf("Digite as notas da P1 e P2: ");
	scanf("%f %f", &nota1, &nota2);
	if (nota1 >= 3 && nota2 >= 3 && (nota1 + nota2)/2 >= 5) {
		printf("Sua media final foi de %.2f \nAprovado!\n", (nota1+nota2)/2);
	} else {
		printf("Notas insuficientes, digite a nota da P3: ");
		scanf("%f", &nota3);
		if (nota2 > nota1) {
			aux = nota1;
			nota1 = nota2;
			nota2 = aux;
		} //Em todos os casos, maior nota estará na variável nota1
		if ((nota1 + nota3)/2 > 5) {
			printf("Sua media final foi de %.2f \nAprovado!\n", (nota1 + nota3)/2);
		} else {
			printf("Sua media final foi de %.2f \nReprovado!\n", (nota1 + nota3)/2);
		}
	}
	return 0;
}
