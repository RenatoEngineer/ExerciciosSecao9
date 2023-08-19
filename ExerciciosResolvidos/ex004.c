/*
 * ex004.c
 *
 *  Criado em: 19 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int quadradoPerfeito(int numero){
	if (numero < 0){
		return 0; //Numeros negativos nao sao quadrados perfeitos
	}

	for (int i = 0; i * i <= numero; i ++){
		if (i * i == numero){
			return 1; //Encontrou um quadrado perfeito
		}
	}

	return 0; //Nao e um quadrado perfeito
}

int main(){

	int numero;

	printf("Digite um Numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	if (quadradoPerfeito(numero)){
		printf("\n%d e um Quadrado Perfeito.\n", numero);
	} else {
		printf("\n%d nao e um Quadrado Perfeito.\n", numero);
	}

	return 0;
}
