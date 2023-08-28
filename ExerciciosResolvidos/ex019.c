/*
 * ex019.c
 *
 *  Criado em: 28 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int primo(int num){
	if (num <= 1){
		return 0; //Nao e primo
	}
	for (int i = 2; i * i <= num; i ++){
		if (num % i == 0){
			return 0; //Nao e primo
		}
	}
	return 1; //E Primo
}

int maiorFatorPrimo(int num){
	int maiorFator = 1;

	for (int i = 2; i <= num; i ++){
		if (num % i == 0 && primo(i)){
			maiorFator = i;
		}
	}
	return maiorFator;
}

int main(){
	int numero;
	int maiorFator;

	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	maiorFator = maiorFatorPrimo(numero);

	if (maiorFator == 1){
		printf("\nO Numero %d nao possui Fatores Primos!!!", numero);
	} else {
		printf("\nO Maior Fator Primo de %d e: %d", numero, maiorFator);
	}

	return 0;
}
