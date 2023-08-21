/*
 * ex007.c
 *
 *  Criado em: 21 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double celsiusParaFahrenheit(double temperaturaCelsius){
	double temperaturaFahrenheit = temperaturaCelsius * (9.0 / 5.0) + 32.0;
	return temperaturaFahrenheit;
}

int main(){
	double temperaturaCelsius;

	printf("Digite a Temperatura em Graus Celsius: ");
	fflush(stdout);
	scanf("%lf", &temperaturaCelsius);

	double temperaturaFahrenheit = celsiusParaFahrenheit(temperaturaCelsius);

	printf("\n%.2lf graus Celsius Correspondem a %.2lf graus Fahrenheit.\n", temperaturaCelsius, temperaturaFahrenheit);

	return 0;
}
