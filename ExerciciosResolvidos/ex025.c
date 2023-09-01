/*
 * ex025.c
 *
 *  Criado em: 1 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double calculaSerie(int n){
	double serie = 0.0;

	for (int i = 1; i <= n; i ++){
		serie += (double)(i * i + 1) / (n + 3);
	}

	return serie;
}

int main(){

	int n;
	double resultado;

	printf("Digite Um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 1){
		printf("\nN deve ser Maior ou Igual a 1!!!");
	} else {
		resultado = calculaSerie(n);
		printf("\nO Resultado da Serie e: %.2lf", resultado);
	}

	return 0;
}
