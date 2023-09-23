/*
 * ex067.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void leString(char vetor[], int tamanho){
	int i = 0;
	char caractere;

	printf("Digite uma String (Pressione Enter para Finalizar): ");
	fflush(stdout);

	while ((caractere = getchar()) != '\n' && i < tamanho - 1){
		vetor[i] = caractere;
		i++;
	}

	//Adiciona o Caractere nulo para indicar o fim da String
	vetor [i] = '\0';
}

int main(){

	int tamanhoMaximo = 10; //Tamanho maximo do vetor de Caracteres
	char vetor[tamanhoMaximo];

	leString(vetor, tamanhoMaximo);

	printf("\nA String lida foi: %s\n", vetor);

	return 0;
}
