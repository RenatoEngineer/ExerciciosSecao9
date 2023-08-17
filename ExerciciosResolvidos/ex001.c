/*
 * ex001.c
 *
 *  Criado em: 17 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Funcao que retorna o dobro de um numero inteiro

int dobrar(int numero){
	return numero * 2;
}

int main(){

	int num;
	int resultado;

	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &num);

	resultado = dobrar(num);

	printf("\nO Dobro de %d e: %d\n", num, resultado);

	return 0;
}
