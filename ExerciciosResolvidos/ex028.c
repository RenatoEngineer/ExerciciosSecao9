/*
 * ex028.c
 *
 *  Criado em: 8 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h> //Para utilizar as constantes M_PI

double calculaCossenoTaylor(double graus){
	//Converte grau para radiano
	double x = graus * M_PI / 180.0;

	//Declaracao e Inicializacao de Variaveis para Calculo
	double resultado = 1.0;
	double termo = 1.0;

	//Calcula a Serie de Taylor com 5 Termos
	for (int n = 1; n <= 5; n ++){
		termo *= -x * x / (2 * n * (2 * n - 1));
		resultado += termo;
	}

	return resultado;
}


int main(){

	double anguloGrau;
	double cosseno;

	printf("Digite o Valor do Angulo em Graus: ");
	fflush(stdout);
	scanf("%lf", &anguloGrau);

	cosseno = calculaCossenoTaylor(anguloGrau);
	printf("\nO cosseno de %.2lf graus e aproximandamente: %.6lf", anguloGrau, cosseno);

	return 0;
}
