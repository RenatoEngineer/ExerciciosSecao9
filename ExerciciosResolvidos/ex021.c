/*
 * ex021.c
 *
 *  Criado em: 30 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
	if (num <= 1){
		return false;
	}

	for (int i = 2; i * i <= num; i ++){
		if (num % i == 0){
			return false;
		}
	}

	return true;
}

int primoAbaixo(int n){
	int contador = 0;

	for (int i = 2; i < n; i ++){
		if (primo(i)){
			contador ++;
		}
	}

	return contador;
}

int main(){

	int N;
	int contadorPrimo;

	printf("Digite um Numero Inteiro N: ");
	fflush(stdout);
	scanf("%d", &N);

	if (N <= 2){
		printf("\nNao Existem Numeros Primo Abaido de %d", N);
	} else {
		contadorPrimo = primoAbaixo(N);
		printf("\nExistem %d Numeros Primos Abaixo de %d", contadorPrimo, N);
	}

	return 0;
}
