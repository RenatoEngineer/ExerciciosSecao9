/*
 * ex040.c
 *
 *  Criado em: 10 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int contarPares(int vetor[], int tamanho){
	int quantidadePares = 0;

	for (int i = 0; i < tamanho; i++){
		if (vetor[i] % 2 == 0){
			quantidadePares++;
		}
	}

	return quantidadePares;
}

int main(){

	int tamanho;
	int pares;

	printf("Digite o Tamanho do Vetor: ");
	fflush(stdout);
	scanf("%d", &tamanho);

	int vetor[tamanho];

	printf("Digite os Elementos do Vetor:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &vetor[i]);
	}

	pares = contarPares(vetor, tamanho);

	printf("\nO Vetor possui %d valores Pares!!!", pares);

	return 0;
}
