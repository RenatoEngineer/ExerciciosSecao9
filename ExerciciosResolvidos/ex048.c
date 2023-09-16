/*
 * ex048.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaDiagonal(int matriz[3][3]){
	int soma = 0;

	//Percorre a Matriz e Soma os Elementos acima da Diagonal Principal
	for (int i = 0; i < 3; i++){
		for (int j = i + 1; j < 3; j++){
			soma += matriz[i][j];
		}
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

	soma = somaDiagonal(matriz);
	printf("\nA Soma dos Elementos acima da Diagonal e: %d", soma);

	return 0;
}
