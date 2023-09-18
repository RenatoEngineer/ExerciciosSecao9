/*
 * ex055.c
 *
 *  Criado em: 18 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int somaDiagonais(int matriz[3][3]){
	int soma = 0;

	//Soma diagonal Principal
	for (int i = 0; i < 3; i++){
		soma += matriz[i][i];
	}

	//Soma da diagonal secundaria
	for (int i = 0; i < 3; i++){
		soma += matriz[i][2 - 1];
	}

	return soma;
}

int main(){

	int matriz[3][3];
	int resultado;

	printf("Digite os Elementos da Matriz 3 x 3:\n");
	fflush(stdout);
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n.:: Matriz Digitada ::.\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	resultado = somaDiagonais(matriz);

	printf("\nA soma das Diagonais Principal e Secundaria e: %d\n", resultado);

	return 0;
}
