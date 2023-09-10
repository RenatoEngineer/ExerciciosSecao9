/*
 * ex037.c
 *
 *  Criado em: 10 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

unsigned long hiperFatorial(int n){
	unsigned long resultado = 1;

	for (int i = 1; i <= n; i++){
		unsigned long termo = 1;
		for (int j = 1; j <= i; j++){
			termo *= i;
		}
		resultado *= termo;
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
		resultado = hiperFatorial(n);
		printf("\nO Hiperfatorial de %d e: %lu", n, resultado);
	}

	return 0;
}
