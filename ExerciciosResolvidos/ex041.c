/*
 * ex041.c
 *
 *  Criado em: 11 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int encontraMaior(int vetor[], int tamanho){
	int maior = vetor[0];

	for (int i = 1; i < tamanho; i++){
		if (vetor[i] > maior){
			maior = vetor[i];
		}
	}

	return maior;
}

int main(){

	int tamanho;
	int maior;

	printf("Digite o Tamanho do Vetor: ");
	fflush(stdout);
	scanf("%d", &tamanho);

	int vetor[tamanho];

	printf("Digite os Elementos do Vetor:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &vetor[i]);
	}

	maior = encontraMaior(vetor, tamanho);

	printf("\nO Maior Valor no Vetor e: %d", maior);

	return 0;
}
