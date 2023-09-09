/*
 * ex029.c
 *
 *  Criado em: 9 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h> //Para utilizar a constante M_PI

double calculaSinH(double graus){
	//Converte grau para radiano
	double x = graus * M_PI / 180.0;

	//Declaracao e Inicializacao de Variaveis para Calculo
	double resultado = x;
	double termo = x;

	//Calcula a Serie de Taylor com 5 Termos
	for (int n = 1; n <= 5; n ++){
		termo *= -x * x / ((2 * n) * (2 * n + 1));
		resultado += termo;
	}

	return resultado;
}


int main(){

	double anguloGrau;
	double senoH;

	printf("Digite o Valor do Angulo em Graus: ");
	fflush(stdout);
	scanf("%lf", &anguloGrau);

	senoH = calculaSinH(anguloGrau);
	printf("\nO seno hiperbolico de %.2lf graus e aproximandamente: %.6lf", anguloGrau, senoH);

	return 0;
}
