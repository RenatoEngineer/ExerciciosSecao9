/*
 * ex018.c
 *
 *  Criado em: 28 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double calculaPotencia(int base, int expoente){
	double resultado = 1.0;

	if (expoente >= 0){
		for (int i = 0; i < expoente; i ++){
			resultado *= base;
		}
	} else {
		for (int i = expoente; i < 0; i ++){
			resultado /= base;
		}
	}

	return resultado;
}

int main(){

	int x;
	int z;
	double resultado;

	printf("Digite o Valor de X: ");
	fflush(stdout);
	scanf("%d", &x);

	printf("Digite o Valor de Z: ");
	fflush(stdout);
	scanf("%d", &z);

	resultado = calculaPotencia(x, z);

	printf("\n%d Elevado a %d e: %.2lf", x, z, resultado);

	return 0;
}
