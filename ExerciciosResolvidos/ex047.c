/*
 * ex047.c
 *
 *  Criado em: 15 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int contaValores(int matriz[4][4]){
	int contador = 0;

	//Percorre a matriz e verifica se cada elemento e maior do que 10
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			if (matriz[i][j] > 10){
				contador++;
			}
		}
	}

	return contador;
}

int main(){

	int matriz[4][4];
	int quantidade;

	printf("Digite os Elementos da Matriz 4 x 4:\n");
	fflush(stdout);
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	quantidade = contaValores(matriz);
	printf("\nA Matriz possui %d valores maiores do que 10!!!", quantidade);

	return 0;
}
