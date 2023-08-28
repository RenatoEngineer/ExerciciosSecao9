/*
 * ex017.c
 *
 *  Criado em: 28 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaEntreNumeros(int num1, int num2){
	if (num1 <= 0 || num2 <= 0){
		printf("\nOs Numeros devem ser Positivos!!!\n");
		return 0; //Valor Invalido
	}

	int soma = 0;
	int inicio = (num1 < num2) ? num1 : num2; //Ternario
	int fim = (num1 < num2) ? num2 : num1; //Ternario

	for (int i = inicio + 1; i < fim; i ++){
		soma += i;
	}
	return soma;
}

int main(){

	int num1;
	int num2;
	int resultado;

	printf("Digite o Primeiro Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Digite o Segundo Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &num2);

	resultado = somaEntreNumeros(num1, num2);

	if (resultado > 0){
		printf("\nA Soma dos Numeros entre %d e %d e: %d\n", num1, num2, resultado);
	}

	return 0;
}
