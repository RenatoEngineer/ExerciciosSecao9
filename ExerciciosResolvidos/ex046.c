/*
 * ex046.c
 *
 *  Criado em: 14 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Imprime o Vetor na Ordem Normal
void imprimeVetor(double v[], int n){
	printf("\nVetor Normal: ");
	for (int i = 0; i < n; i++){
		printf("%.2lf ", v[i]);
	}

	printf("\n");
}

//Imprime Vetor na Ordem Inversa
void imprimeVetorInverso(double v[], int n){
	printf("\nVetor Inverso: ");
	for (int i = n - 1; i >= 0; i--){
		printf("%.2lf ", v[i]);
	}
	printf("\n");
}

//Calcula a Media Aritmetica dos Elementos do Vetor
double calculaMedia(double v[], int n){
	double soma = 0.0;
	for (int i = 0; i < n; i++){
		soma += v[i];
	}
	return soma / n;
}

int main(){

	int n;
	double media;

	printf("Digite o Numero de Elementos do Vetor: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n <= 0){
		printf("\nO Vetor deve ter ao menos um elemento!!!");
		return 1;   //Saida do programa com codigo de erro.
	}

	double vetor[n];

	printf("Digite os Elementos do Vetor:\n");
	fflush(stdout);
	for (int i = 0; i < n; i++){
		scanf("%lf", &vetor[i]);
	}

	//Chamando as Funcoes para Imprimir o Vetor e seu Inverso
	imprimeVetor(vetor, n);
	imprimeVetorInverso(vetor, n);

	//Calcula a Media e imprime o Resultado
	media = calculaMedia(vetor, n);
	printf("\nA media Aritmetica dos Elementos do vetor e: %.2lf", media);

	return 0;
}
