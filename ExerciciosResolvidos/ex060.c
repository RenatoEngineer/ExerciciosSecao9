/*
 * ex060.c
 *
 *  Criado em: 21 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <string.h>

int encontraSubString(char string[], char subString[]){
	int comprimentoString = strlen(string);
	int comprimentoSubString = strlen(subString);

	for (int i = 0; i < comprimentoString - comprimentoSubString; i++){
		int j;
		for (j = 0; j < comprimentoSubString; j++){
			if (string[i + j] != subString[j]){
				break;
			}
		}
		if (j == comprimentoSubString){
			return i; //A SubString foi encontrada na posicao i
		}
	}

	return -1; //A SubString nao foi encontrada na String
}

int main(){

	char string[100];
	char subString[100];
	int posicao;

	printf("Digite uma String (Uma Palavra): ");
	fflush(stdout);
	scanf("%s", string); //String nao e necessario '&'

	printf("\nDigite a SubString que deseja encontrar\n(uma letra da palavra digitada): ");
	fflush(stdout);
	scanf("%s", subString); //String nao e necessario '&'

	posicao = encontraSubString(string, subString);

	if (posicao != -1){
		printf("\nA SubString foi encontrada na posicao %d\n", posicao);
	} else {
		printf("\nA SubString nao foi encontrada na string!!!\n");
	}

	return 0;
}
