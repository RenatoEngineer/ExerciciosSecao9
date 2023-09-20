/*
 * ex057.c
 *
 *  Criado em: 20 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula a Soma dos Elementos de uma Coluna em uma Matriz
int somaColuna(int matriz[7][6], int coluna){
	int soma = 0;
	for (int linha = 0; linha < 7; linha++){
		soma += matriz[linha][coluna];
	}
	return soma;
}

int main(){

	int matriz[7][6];
	int coluna;
	int resultado;

	//Preenche a Matriz com Valores Fornecidos pelo Usuario
	printf("Digite os Elementos da Matriz A[7][6]:\n");
	fflush(stdout);
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 6; j++){
			printf("A[%d][%d] ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n\n.:: Matriz Digitada ::.\n\n");
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 6; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n\nDigite o Numero da Coluna (0 a 5): ");
	fflush(stdout);
	scanf("%d", &coluna);

	//Verifica se a Coluna esta dentro do intervalo valido
	if (coluna < 0 || coluna >= 6){
		printf("\nColuna fora do Intervalo Valido!!!\n");
	} else {
		//Calcula e exibe a soma dos elementos da Coluna
		resultado = somaColuna(matriz, coluna);
		printf("\nA Soma dos Elementos da Linha %d e: %d\n", coluna, resultado);
	}

	return 0;
}
