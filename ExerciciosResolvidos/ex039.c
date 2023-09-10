/*
 * ex039.c
 *
 *  Criado em: 10 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void troque(double A, double B, double resultado[2]){
	resultado[0] = B;  //Coloca o valor de B na primeira posicao do Vetor
	resultado[1] = A; //Coloca o Valor de A na segunda posicao do Vetor
}

int main(){

	double valorA;
	double valorB;
	double resultado[2]; //Vetor para Armazenar os valores trocados

	printf("Digite o Valor de A: ");
	fflush(stdout);
	scanf("%lf", &valorA);

	printf("Digite o Valor de B: ");
	fflush(stdout);
	scanf("%lf", &valorB);

	printf("\nValores antes da Troca: A = %.2lf, B = %.2lf", valorA, valorB);

	troque(valorA, valorB, resultado);

	printf("\nValores depois da Troca: A = %.2lf, B = %.2lf", resultado[0], resultado[1]);

	return 0;
}
