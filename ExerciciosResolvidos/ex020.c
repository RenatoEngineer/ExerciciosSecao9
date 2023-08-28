/*
 * ex020.c
 *
 *  Criado em: 28 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

unsigned long calculaFatorial(int n){
	unsigned long fatorial = 1;

	for (int i = 1; i <= n; i ++){
		fatorial *= i;
	}
	return fatorial;
}

int main(){

	int n;
	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 0){
		printf("\nO Numero nao e Positivo!!!");
	} else {
		unsigned long fatorial = calculaFatorial(n);
		printf("\nO Fatorial de %d e: %lu", n, fatorial);
	}

	return 0;
}
