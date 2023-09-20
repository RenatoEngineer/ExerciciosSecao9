/*
 * ex056.c
 *
 *  Criado em: 18 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula a Soma dos Elementos de uma linha em uma Matriz
int somaLinha(int matriz[7][6], int linha){
	int soma = 0;
	for (int coluna = 0; coluna < 6; coluna++){
		soma += matriz[linha][coluna];
	}
	return soma;
}

int main(){

	int matriz[7][6];
	int linha;
	int resultado;

	//Preenche a Matriz com Valores Fornecidos pelo Usuario
	printf("Digite os Elementos da Matriz A[7][6]:\n");
	fflush(stdout);
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 6; j++){
			printf("\nA[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n\nDigite o Numero da Linha (0 a 6): ");
	fflush(stdout);
	scanf("%d", &linha);

	//Verifica se a linha esta dentro do intervalo valido
	if (linha < 0 || linha >= 7){
		printf("\nLinha fora do Intervalo Valido!!!\n");
	} else {
		//Calcula e exibe a soma dos elementos da linha
		resultado = somaLinha(matriz, linha);
		printf("\nA Soma dos Elementos da Linha %d e: %d\n", linha, resultado);
	}

	return 0;
}
