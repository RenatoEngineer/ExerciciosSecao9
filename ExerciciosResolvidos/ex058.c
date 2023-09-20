/*
 * ex058.c
 *
 *  Criado em: 20 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula o Produto Matricial de Duas Matrizes
void produtoMatricial(int N, int A[][N], int B[][N], int C[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			C[i][j] = 0;
			for (int k = 0; k < N; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

//Imprime a Matriz
void imprimeMatriz(int N, int matriz[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(){

	int N;

	//Solicita a Ordem da Matriz
	printf("Digite a Ordem das Matrizes Quadradas A e B: ");
	fflush(stdout);
	scanf("%d", &N);

	//Declara as Matrizes A, B e C
	int A[N][N], B[N][N], C[N][N];

	//Preenche a Matriz A
	printf("Digite os Elementos da Matriz A:\n");
	fflush(stdout);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("A[%d][%d] ", i, j);
			scanf("%d", &A[i][j]);
		}
		printf("\n");
	}

	printf("\n.:: Matriz Digitada ::.\n\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	//Preenche a Matriz B
	printf("\nDigite os Elementos da Matriz B:\n");
	fflush(stdout);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("B[%d][%d] ", i, j);
			scanf("%d", &B[i][j]);
		}
		printf("\n");
	}

	printf("\n.:: Matriz Digitada ::.\n\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}

	//Calcula o Produto Matricial e Armazena em C
	produtoMatricial(N, A, B, C);

	//Imprime a Matriz Resultante C
	printf("\nProduto Matricial C = A * B:\n\n");
	imprimeMatriz(N, C);

	return 0;
}
