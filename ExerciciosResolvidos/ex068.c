/*
 * ex068.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <string.h> //strlen, strcpy

void intercalaString(char string1[], const char string2[]){
	int comprimento1 = strlen(string1);
	int comprimento2 = strlen(string2);
	int comprimentoResultado = comprimento1 + comprimento2;
	char resultado[comprimentoResultado + 1]; // +1 para o Caractere Nulo

	int i, j, k;
	i = j = k = 0;

	while (i < comprimento1 || j < comprimento2){
		if (i < comprimento1){
			resultado[k++] = string1[i++];
		}
		if (j < comprimento2){
			resultado[k++] = string2[j++];
		}
	}

	resultado[k] = '\0'; //Adiciona o Caractere Nulo no Final

	//Copia o Resultado de Volta para String1
	strcpy(string1, resultado);
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

	intercalaString(string1, string2);

	printf("\nPrimeira String Apos a Intercalacao: %s\n", string1);

	return 0;
}
