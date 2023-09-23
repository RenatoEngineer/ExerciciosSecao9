/*
 * ex065.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <string.h>

void concatenaCaracteres(char string1[], char string2[], int N){
	int comprimento1 = strlen(string1); //Comprimento da Primeira String

	//Percorre a segunda String e copia no Maximo N caracteres para a primeira String
	for (int i = 0; i < N && string2[i] != '\0'; i++){
		string1[comprimento1 + i] = string2[i];
	}

	//Adiciona o Caractere nulo '\0' ao final da String resultante para indicar o NOVO fim da String
	string1[comprimento1 + N] = '\0';
}

int main(){

	char string1[100];
	char string2[100];
	int N;

	printf("Digite a Primeira String: ");
	fflush(stdout);
	scanf("%s", string1);

	printf("Digite a Segunda String: ");
	fflush(stdout);
	scanf("%s", string2);

	printf("Digite a Quantidade de Caracteres da String 2\nque quer concatenar a String 1: ");
	fflush(stdout);
	scanf("%d", &N);

	concatenaCaracteres(string1, string2, N);

	printf("\nString 1 apos a Concatenacao com %d Caracteres da String 2: %s\n", N, string1);

	return 0;
}
