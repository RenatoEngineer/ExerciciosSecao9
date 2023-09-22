/*
 * ex062.c
 *
 *  Criado em: 22 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void tamanho(char *str, int *strsize){
	*strsize = 0; //Inicializa com Zero

	//Percorre a String ate encontrar o Caractere nulo que indica o fim da String
	while (*str != '\0'){
		(*strsize)++; //Incrementa o Valor apontado por strsize
		str++; //Avanca para o proximo Caractere na String
	}
}

int main(){

	char minhaString[] = "Ola Mundo!!!";
	int tamanhoString;

	//Chama a Funcao para Calcular o comprimento da String
	tamanho(minhaString, &tamanhoString);

	//Exibe o Resultado
	printf("O Comprimento da String e: %d\n", tamanhoString);

	return 0;
}
