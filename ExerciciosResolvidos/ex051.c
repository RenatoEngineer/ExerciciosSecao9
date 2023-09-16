/*
 * ex051.c
 *
 *  Criado em: 16 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaDiagonalSecundaria(int matriz[3][3]){
	int soma = 0;

	//Percorre a Diagonal Secundaria e Soma os Elementos
	for (int i = 0; i < 3; i++){
		soma += matriz[i][2 - i];   //A coluna diminui a medida que a linha aumenta
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

	soma = somaDiagonalSecundaria(matriz);
	printf("\nA Soma dos Elementos da Diagonal Secundaria e: %d", soma);

	return 0;
}
