/*
 * ex066.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <ctype.h> //toupper

char maiusculas(char caractere){
	return toupper(caractere);
}

int main(){

	char caractere;
	char maiusculo;

	printf("Digite um Caractere: ");
	fflush(stdout);
	scanf("%c", &caractere);

	maiusculo = maiusculas(caractere);

	printf("\nO Caractere em Maiusculo e: %c\n", maiusculo);

	return 0;
}
