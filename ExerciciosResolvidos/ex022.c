/*
 * ex022.c
 *
 *  Criado em: 30 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void geraLinhaExclamacao(int n){
	for (int i = 1; i <= n; i ++){
		for (int j = 0; j < i; j ++){
			printf("!");
		}
		printf("\n");
	}
}

int main(){

	int n;
	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	geraLinhaExclamacao(n);

	return 0;
}
