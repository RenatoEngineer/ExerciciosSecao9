/*
 * ex045.c
 *
 *  Criado em: 14 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h>

double desvioPadrao(double v[], int n){
	if (n <= 1){
		return 0.0; //Nao Calcula o Desvio Padrao com menos de 2 Elementos
	}

	double soma = 0.0;
	double media = 0.0;

	//Calcula a Media dos Elementos do Vetor
	for (int i = 0; i < n; i++){
		soma += v[i];
	}
	media = soma / n;

	//Calcula a Soma dos Quadrados das Diferencas entre os elementos e a Media
	double somaDosQuadrados = 0.0;
	for (int i = 0; i < n; i++){
		double diferenca = v[i] - media;
		somaDosQuadrados += diferenca * diferenca;
	}

	//Calcula Desvio Padrao
	double desvioPadrao = sqrt(somaDosQuadrados / (n - 1));

	return desvioPadrao;
}

int main(){

	int n;
	double desvio;

	printf("Digite o Numero de Elementos no Vetor: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n <= 0){
		printf("\nO Vetor deve ter pelo menos um Elemento!!!");
		return 1;
	}

	double vetor[n];

	printf("Digite os elementos do Vetor:\n");
	fflush(stdout);
	for (int i = 0; i < n; i++){
		scanf("%lf", &vetor[i]);
	}

	desvio = desvioPadrao(vetor, n);
	printf("\nO desvio Padrao e: %.2lf", desvio);

	return 0;
}
