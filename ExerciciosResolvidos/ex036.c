/*
 * ex036.c
 *
 *  Criado em: 10 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula Fatorial
unsigned long calculaFatorial(int num){
	unsigned long fatorial = 1;
	for (int i = 1; i <= num; i++){
		fatorial *= i;
	}
	return fatorial;
}

//Calcula Superfatorial
unsigned long calculaSuperFatorial(int N){
	if (N <= 0){
		printf("\nNumero Invalido!!!");
		return 0;
	}

	unsigned long superFatorial = 1;

	for (int i = 1; i <= N; i++){
		superFatorial *= calculaFatorial(i);
	}

	return superFatorial;
}

int main(){

	int N;
	unsigned long resultado;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &N);

	resultado = calculaSuperFatorial(N);

	if (resultado != 0){
		printf("\nO Superfatorial de %d e: %lu", N, resultado);
	}

	return 0;
}
