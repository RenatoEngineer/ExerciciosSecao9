/*
 * ex023.c
 *
 *  Criado em: 31 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void geraTriangulo(int n){
	//Parte Superior do Triangulo
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= i; j ++){
			printf("*");
		}
		printf("\n");
	}

	//Parte Inferior do Triangulo
	for (int i = n - 1; i >= 1; i --){
		for (int j = 1; j <= i; j ++){
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
