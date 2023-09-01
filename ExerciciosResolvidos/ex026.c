/*
 * ex026.c
 *
 *  Criado em: 1 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int calculaSomatorio(int n){
	int somatorio = 0;

	for (int i = 1; i <= n; i ++){
		somatorio += i;
	}

	return somatorio;
}

int main(){

	int n;
	int resultado;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 1){
		printf("\nO Numero deve ser Maior que Zero!!!");
	} else {
		resultado = calculaSomatorio(n);
		printf("\nO Somatorio de 1 ate %d e: %d", n, resultado);
	}

	return 0;
}
