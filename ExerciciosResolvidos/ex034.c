/*
 * ex034.c
 *
 *  Criado em: 9 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula o Fatorial Duplo
unsigned long calculaFatorialDuplo(int N){
	//Verifica se N nao e Positivo ou nao Impar
	if (N <= 0 || N % 2 == 0){
		printf("\nNumero Invalido!!!");
		return 0;
	}

	//Declara e Inicializa Variavel para Armazenar o Fatorial Duplo
	unsigned long fatorialDuplo = 1;

	//Loop para Calculo do Fatorial Duplo
	for (int i = 1; i <= N; i += 2){
		fatorialDuplo *= i;
	}

	//Retorna o Resultado do Fatorial Duplo
	return fatorialDuplo;
}

int main(){

	int N;
	unsigned long resultado;

	printf("Digite um Numero Inteiro Positivo Impar: ");
	fflush(stdout);
	scanf("%d", &N);

	//Chama a funcao e armazena o resultado na variavel resultado
	resultado = calculaFatorialDuplo(N);

	//Se o resultado NAO for zero, exibe o Fatorial Duplo
	if (resultado != 0){
		printf("\nO Fatorial Duplo de %d!! e: %lu", N, resultado);
	}

	return 0;
}
