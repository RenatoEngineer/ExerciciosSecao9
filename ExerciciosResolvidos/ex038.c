/*
 * ex038.c
 *
 *  Criado em: 10 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

unsigned long fatorialExponencial(int n){
	if (n <= 1){
		return 1;
	}

	unsigned long resultado = n;

	for (int i = n - 1; i >= 1; i--){
		resultado = resultado * i;
	}

	return resultado;
}

int main(){

	int n;
	unsigned long resultado;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 0){
		printf("\nNumero Invalido!!!");
	} else {
		resultado = fatorialExponencial(n);
		printf("\nO Fatorial Exponencial de %d e: %lu", n, resultado);
	}

	return 0;
}
