/*
 * ex032.c
 *
 *  Criado em: 9 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Funcao para Calcular o MDC (Maximo Divisor Comum) usando o algoritmo de Euclides

int mdc(int a, int b){
	while (b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

//Funcao para Simplificar Fracao

void simplificaFracao(int numerador, int denominador, int resultado[2]){
	int divisorComum = mdc (numerador, denominador);

	resultado[0] = numerador / divisorComum;
	resultado[1] = denominador / divisorComum;
}

int main(){

	int numerador;
	int denominador;
	int resultado[2];

	printf("Digite o Numerador da Fracao: ");
	fflush(stdout);
	scanf("%d", &numerador);

	printf("Digite o Denominador da Fracao: ");
	fflush(stdout);
	scanf("%d", &denominador);

	simplificaFracao(numerador, denominador, resultado);

	printf("\nA Fracao Simplificada e: %d/%d", resultado[0], resultado[1]);

	return 0;
}
