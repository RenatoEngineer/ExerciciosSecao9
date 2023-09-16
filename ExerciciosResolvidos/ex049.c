/*
 * ex049.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaDiagonal(int matriz[3][3]){
	int soma = 0;

	//Percorre a Matriz e Soma os Elementos abaixo da Diagonal Principal
	for (int i = 1; i < 3; i++){   //Comeca em 1 para evitar a diagonal principal
		for (int j = 0; j < 1; j++){
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
	//Preenche a Matriz com os Valores Fornecidos pelo Usuario
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	soma = somaDiagonal(matriz);
	printf("\nA Soma dos Elementos abaixo da Diagonal Principal e: %d", soma);

	return 0;
}
