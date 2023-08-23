/*
 * ex010.c
 *
 *  Criado em: 23 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int encontraMaior(int num1, int num2){
	if(num1 > num2){
		return num1;
	} else {
		return num2;
	}
}

int main(){

	int numero1;
	int numero2;

	printf("Digite o Primeiro Numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("Digite o Segundo Numero: ");
	fflush(stdout);
	scanf("%d", &numero2);

	int maior = encontraMaior(numero1, numero2);

	printf("\nO Maior Numero e: %d\n", maior);

	return 0;
}
