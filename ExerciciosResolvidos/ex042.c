/*
 * ex042.c
 *
 *  Criado em: 11 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double calculaMedia(double vetor[], int tamanho){
	if (tamanho == 0){
		return 0.0; //Evita Divisao por Zero se o Vetor estiver Vazio
	}

	double soma = 0.0;

	for (int i = 0; i < tamanho; i++){
		soma += vetor[i];
	}

	return soma / tamanho;
}

int main(){

	int tamanho;
	double media;

	printf("Digite o Tamanho do Vetor: ");
	fflush(stdout);
	scanf("%d", &tamanho);

	double vetor[tamanho];

	printf("Digite os Elementos do Vetor:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%lf", &vetor[i]);
	}

	media = calculaMedia(vetor, tamanho);

	printf("A Media dos Elementos do Vetor e: %.2lf", media);

	return 0;
}
