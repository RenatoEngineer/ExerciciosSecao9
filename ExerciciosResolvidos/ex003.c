/*
 * ex003.c
 *
 *  Criado em: 19 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int verificaNumero(int numero){
	if (numero > 0){
		return 1; //Positivo
	} else if (numero < 0){
		return -1; //Negativo
	} else {
		return 0; //Zero
	}
}

int main(){
	int numero;

	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	int resultado = verificaNumero(numero);

	if (resultado == 1){
		printf("\nO Numero e Positivo.\n");
	} else if (resultado == -1){
		printf("\nO Numero e Negativo.\n");
	} else {
		printf("\nO Numero e igual a Zero.\n");
	}

	return 0;
}
