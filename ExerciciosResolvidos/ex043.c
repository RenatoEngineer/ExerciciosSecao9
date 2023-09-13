/*
 * ex043.c
 *
 *  Criado em: 13 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <stdlib.h>  //Para as funcoes srand e rand
#include <time.h>   //Para usar time

//Verifica se o Numero ja esta no vetor
int estaNoVetor(int numero, int vetor[], int tamanho){
	for (int i = 0; i < tamanho; i++){
		if (vetor[i] == numero){
			return 1; //Se o numero ja estiver no vetor
		}
	}

	return 0; //Se o numero nao estiver no vetor
}

//Preenche o Vetor com numeros aleatorios sem repeticao
void preencheVetor(int vetor[], int tamanho, int maximo){
	if (tamanho > maximo){
		printf("\nTamanho do Vetor maior que o Intervalo de Numeros Possiveis!!!");
	}

	srand(time(NULL));

	for (int i = 0; i < tamanho; i++){
		int numero;
		do {
			numero = rand() % maximo + 1;
		} while (estaNoVetor(numero, vetor, i));

		vetor[i] = numero;
	}
}

int main(){

	int tamanho;

	printf("Digite o Tamanho do Vetor: ");
	fflush(stdout);
	scanf("%d", &tamanho);

	int vetor[tamanho];

	preencheVetor(vetor, tamanho, 100); //Preenche o vetor com Numeros de 1 a 100

	printf("\nSegue abaixo o Vetor Preenchido sem Repeticao:\n\n");
	for (int i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}

	printf("\n");

	return 0;
}
