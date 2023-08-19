/*
 * ex005.c
 *
 *  Criado em: 19 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calcularVolumeEsfera(double raio){
	return (4.0/3.0) * PI * pow(raio, 3);
}

int main(){
	double raio;

	printf("Digite o raio da Esfera: ");
	fflush(stdout);
	scanf("%lf", &raio);

	if (raio < 0){
		printf("\nO raio deve ser nao Negativo.\n");
	} else {
		double volume = calcularVolumeEsfera(raio);
		printf("\nO Volume da Esfera de raio %.2lf e: %.2lf\n", raio, volume);
	}
}
