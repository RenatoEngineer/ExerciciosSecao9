/*
 * ex063.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include<stdio.h>
#include <string.h>

int saoIguais(char string1[], char string2[]){
	//Verifica se as Strings tem o mesmo Comprimento
	if (strlen(string1) != strlen(string2)){
		return 0; //As Strings sao diferentes
	}

	//Compara cada caractere das duas Strings
	for (int i = 0; string1[i] != '\0'; i++){
		if (string1[i] != string2[i]){
			return 0; //As Strings sao diferentes
		}
	}

	return 1; //As strings sao iguais
}

int main(){

	char string1[100];
	char string2[100];

	printf("Digite a Primeira String: ");
	fflush(stdout);
	scanf("%s", string1);

	printf("Digite a Segunda String: ");
	fflush(stdout);
	scanf("%s", string2);

	if (saoIguais(string1, string2)){
		printf("\nAs Strings sao Iguais!!!\n");
	} else {
		printf("\nAs Strings sao Diferentes!!!\n");
	}

	return 0;
}
