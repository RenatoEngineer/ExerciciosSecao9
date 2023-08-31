/*
 * ex024.c
 *
 *  Criado em: 31 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void geraTriangulo(int n){
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= n - i; j ++){ //Imprime Espacos em Branco
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j ++){ //Imprime os Asteriscos
			printf("*");
		}

		printf("\n");
	}
}

int main(){

	int n;
	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n > 0){
		geraTriangulo(n);
	} else {
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
