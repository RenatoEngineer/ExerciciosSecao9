/*
 * ex054.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaMatriz(int matriz[4][4]){
	int soma = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			soma += matriz[i][j];
		}
	}
	return soma;
}

int main(){

	int matriz[4][4];
	int resultado;

	printf("Digite os Elementos da Matriz 4 x 4:\n");
	fflush(stdout);
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n.:: Matriz Digitada ::.\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("%d\t", matriz[i][j]);  //Preenche com Zero a esquerda
		}
		printf("\n");
	}

	resultado = somaMatriz(matriz);

	printf("\nA Soma dos Elementos da Matriz 4 x 4 e: %d", resultado);

	return 0;
}
