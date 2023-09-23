/*
 * ex064.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <string.h>

void concatenaString(char string1[], char string2[]){
	int comprimento1 = strlen(string1);  //Comprimento da Primeira String
	int comprimento2 = strlen(string2); //Comprimento da Segunda String

	//Percorre a Segunda String e Copia seus Caracteres para a Primeira String
	for (int i = 0; i < comprimento2; i++){
		string1[comprimento1 + i] = string2[i];
	}

	//Adiciona o Caractere Nulo '\0' ao final da String para indicar o fim da String
	string1[comprimento1 + comprimento2] = '\0';
}

int main(){

	char string1[100];
	char string2[100];

	printf("Digite a String 1: ");
	fflush(stdout);
	scanf("%s", string1);

	printf("Digite a String 2: ");
	fflush(stdout);
	scanf("%s", string2);

	concatenaString(string1, string2);

	printf("\nString 1 apos a Concatenacao: %s\n", string1);

	return 0;
}
