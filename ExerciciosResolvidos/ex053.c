/*
 * ex053.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int N;

//Verifica se a Matriz e uma Matriz Identidade
int matrizIdentidade(int matriz[N][10]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			//Verifica se os Elementos da diagonal Principal sao 1 e os outros elementos sao 0
			if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)){
				return 0;   //Nao e uma Matriz Identidade
			}
		}
	}
	return 1;   //E uma matriz identidade
}

int main(){

	printf("Digite a Ordem da Matriz Quadrada 'N' (Entre 1 e 10): ");
	fflush(stdout);
	scanf("%d", &N);

	if (N <= 0 || N > 10){
		printf("\nA Ordem da Matriz deve estar entre 1 e 10!!!");
		return 1;   //Saida do Programa com Erro
	}

	int matriz[10][10];

	printf("Digite os Elementos da Matriz %d x %d:\n", N, N);
	fflush(stdout);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n.:: Matriz Digitada ::.\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	if (matrizIdentidade(matriz)){
		printf("\nA Matriz e uma Matriz Identidade!!!");
	} else {
		printf("\nA Matriz nao e uma Matriz Identidade!!!");
	}

	return 0;
}
