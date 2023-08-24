/*
 * ex012.c
 *
 *  Criado em: 24 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaAlgarismos(int numero){
	if (numero <= 0){
		printf("\nNumero Invalido!\n");
		return -1; //Numero Invalido
	}

	int soma = 0;
	while (numero > 0){
		soma += numero % 10;
		numero /= 10;
	}

	return soma;
}

int main(){
	int numero;

	printf("Digite um Numero inteiro maior do que zero: ");
	fflush(stdout);
	scanf("%d", &numero);

	int resultado = somaAlgarismos(numero);

	if (resultado >= 0){
		printf("\nA soma dos Algarismos de %d e: %d\n", numero, resultado);
	}

	return 0;
}
