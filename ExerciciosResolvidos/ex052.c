/*
 * ex052.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void calculaTransposta(int matriz[][10], int N){
	int transposta[10][10];

	//Calcula a Matriz Transposta
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			transposta[i][j] = matriz[j][i];
		}
	}

	//Imprime a Matriz Transposta
	printf("\nMatriz Transposta:\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}
}

int main(){

	int N;
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

	calculaTransposta(matriz, N);

	return 0;
}
