/*
 * ex035.c
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
	for (int i = 1; i <= num; i ++){
		fatorial *= i;
	}
	return fatorial;
}

//Calcula Fatorial Quadruplo
unsigned long calculaFatorialQuadruplo(int n){

	//Verifica se e menor que zero
	if (n < 0){
		printf("\nNumero Invalido!!!");
		return 0;
	}

	//Calcula (2n)!
	unsigned long fatorial2n = calculaFatorial(2 * n);

	//Calcula n!
	unsigned long fatorialN = calculaFatorial(n);

	//Calcula Fatorial Quadruplo: (2n)! / n!
	unsigned long fatorialQuadruplo = fatorial2n / fatorialN;

	return fatorialQuadruplo;
}

int main(){

	int n;
	unsigned long resultado;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	resultado = calculaFatorialQuadruplo(n);

	if (resultado != 0){
		printf("\nO Fatorial Quadruplo de %d e: %lu", n, resultado);
	}

	return 0;
}
