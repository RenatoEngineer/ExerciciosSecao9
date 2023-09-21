/*
 * ex059.c
 *
 *  Criado em: 21 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula a Uniao de dois Vetores
void calculaUniao(int vetor1[], int vetor2[], int resultado[], int tamanho){
	int i, j, k = 0;

	//Inicializa o Vetor resultado com zeros
	for (i = 0; i < 2 * tamanho; i++){
		resultado[i] = 0;
	}

	//Copia os Elementos do Primeiro Vetor para o Vetor Resultado
	for (i = 0; i < tamanho; i++){
		resultado[k] = vetor1[i];
		k++;
	}

	//Verifica se Cada Elemento do Segundo Vetor ja esta no Vetor Resultado
	for (i = 0; i < tamanho; i++){
		int estaNaUniao = 0;
		for (j = 0; j < k; j++){
			if (vetor2[i] == resultado[j]){
				estaNaUniao = 1;
				break;
			}
		}
		//Se nao Estiver na Uniao adiciona ao Vetor Resultado
		if (!estaNaUniao){
			resultado[k] = vetor2[i];
			k++;
		}
	}
}

int main(){

	int tamanho = 10;
	int vetor1[tamanho], vetor2[tamanho], resultado[2 * tamanho];

	//Solicita ao Usuario os Elementos do Primeiro Vetor
	printf("Insira os Elementos do Primeiro Vetor (10 Elementos):\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &vetor1[i]);
	}
	//Solicita ao Usuario os Elementos do Segundo Vetor
	printf("\nInsira os Elementos do Segundo Vetor (10 Elementos):\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &vetor2[i]);
	}

	//Chama a Funcao para Calcular a Uniao
	calculaUniao(vetor1, vetor2, resultado, tamanho);

	//Exibe o Vetor Uniao
	printf("\nVetor Uniao:\n");
	for (int i = 0; i < tamanho * 2; i++){
		if (resultado[i] != 0){
			printf("%d ", resultado[i]);
		}
	}

	return 0;
}
