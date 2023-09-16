/*
 * ex050.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaDiagonalPrincipal(int matriz[3][3]){
	int soma = 0;

	//Percorre a diagonal principal e soma os Elementos
	for (int i = 0; i < 3; i++){
		soma += matriz[i][i];
	}

	return soma;
}

int main(){

	int matriz[3][3];
	int soma;

	printf("Digite os Elementos da Matriz 3 x 3:\n");
	fflush(stdout);
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	soma = somaDiagonalPrincipal(matriz);
	printf("\nA Soma dos Elementos na Diagonal Principal e: %d", soma);

	return 0;
}
