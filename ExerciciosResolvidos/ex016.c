/*
 * ex016.c
 *
 *  Criado em: 26 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void desenhaLinha(int quantidade){
	for (int i = 0; i < quantidade; i ++){
		printf("=");
	}
}

int main(){
	int quantidade;

	printf("Digite a Quantidade de Simbolos de Igual (=) para Desenhar a Linha: ");
	fflush(stdout);
	scanf("%d", &quantidade);

	if (quantidade > 0){
		desenhaLinha(quantidade);
	} else {
		printf("\nQuantidade Invalida!!!\n");
	}

	return 0;
}
