/*
 * ex009.c
 *
 *  Criado em: 23 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h>

#define PI 3.141592

double calculaVolumeCilindro(double raio, double altura){
	double volume = PI * pow(raio, 2) * altura;
	return volume;
}

int main(){

	double raio;
	double altura;

	printf("Digite o Raio do Cilindro: ");
	fflush(stdout);
	scanf("%lf", &raio);

	printf("Digite a Altura do Cilindro: ");
	fflush(stdout);
	scanf("%lf", &altura);

	if (raio >= 0 && altura >= 0){
		double volume = calculaVolumeCilindro(raio, altura);
		printf("\nO Volume do Cilindro e: %.2lf\n", volume);
	} else {
		printf("\nValores Invalidos para o Raio ou Altura!\n");
	}

	return 0;
}
