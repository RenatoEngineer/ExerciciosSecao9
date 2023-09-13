/*
 * ex044.c
 *
 *  Criado em: 13 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int j = 0;
int k = 0;

//Separa os Elementos Pares e Impares de um Vetor
void separa(int X[], int A[], int B[], int n){
	int i = 0;

	//Inicializa Vetores A e B
	for (i = 0; i < n; i++){
		A[i] = 0;
		B[i] = 0;
	}

	//Percorre o Vetor X
	for (i = 0; i < n; i++){
		if (X[i] % 2 == 0){
			//Armazena Elemento Par no Vetor A
			A[j] = X[i];
			j++;
		} else {
			//Armazena o Elemento Impar no Vetor B
			B[k] = X[i];
			k++;
		}
	}
}

int main(){

	int X[30];
	int A[30];
	int B[30];
	int i;
	char ordinal = 176;

	for (i = 0; i < 30; i ++){
		printf("Digite o %d%c Elemento de X: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &X[i]);
	}

	//Separa os Elementos Pares e Impares
	separa(X, A, B, 30);

	//Imprime Vetores A e B
	printf("\nVetor A:\n");
	for (i = 0; i < j; i++){
		printf("%d ", A[i]);
	}

	printf("\n");

	printf("\nVetor B:\n");
	for (i = 0; i < k; i++){
		printf("%d ", B[i]);
	}

	printf("\n");

	return 0;
}
