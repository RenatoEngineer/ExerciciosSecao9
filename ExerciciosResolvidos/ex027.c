/*
 * ex027.c
 *
 *  Criado em: 8 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h> //Para utilizar as constantes M_PI, tgamma e pow

double calculaSenoTaylor(double graus){
	//Converte grau para radiano
	double x = graus * M_PI / 180.0;

	double seno = 0.0;
	int n;
	int sinal = 1; //Controla a alternancia de sinal positivo e negativo

	for (n = 0; n <= 5; n += 2){
		double termo = pow(x, n) / tgamma(n + 1); //tgamma calcula fatorial n!
		seno += sinal * termo;
		sinal = -sinal;
	}

	return seno;
}


int main(){

	double anguloGrau;
	double seno;

	printf("Digite o Valor do Angulo em Graus: ");
	fflush(stdout);
	scanf("%lf", &anguloGrau);

	seno = calculaSenoTaylor(anguloGrau);
	printf("\nO seno de %.2lf graus e aproximandamente: %.6lf", anguloGrau, seno);

	return 0;
}
