/*
 * ex061.c
 *
 *  Criado em: 22 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <string.h> //strlen
#include <ctype.h> //isalpha tolower

int saoAnagramas(char string1[], char string2[]){
	int comprimento1 = strlen(string1);
	int comprimento2 = strlen(string2);

	//Se as Strings Nao tiverem o mesmo Comprimento, elas nao podem ser anagramas
	if (comprimento1 != comprimento2){
		return 0;
	}

	//Inicia o vetor de contagem de caractres com zero
	int contagem[26] = {0}; //Assume que estamos lidando apenas com letras minusculas

	//Preenche a contagem para a primeira string (incrementa para cada caractere)
	for (int i = 0; i < comprimento1; i++){
		if (isalpha(string1[i])){
			contagem[tolower(string1[i]) - 'a']++;
		}
	}

	//Decrementa a contagem para a segunda string (decrementa para cada caractere)
	for (int i = 0; i < comprimento2; i++){
		if (isalpha(string2[i])){
			contagem[tolower(string2[i]) - 'a']--;
		}
	}

	//Se todas as contagens forem zero, as strings sao anagramas
	for (int i = 0; i < 26; i++){
		if (contagem[i] != 0){
			return 0;
		}
	}

	return 1; //As strings sao anagramas
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

	if (saoAnagramas(string1, string2)){
		printf("\nVerdadeiro - As Strings sao Anagramas!!!\n");
	} else {
		printf("\nFalso - As Strings nao sao Anagramas!!!\n");
	}

	return 0;
}
