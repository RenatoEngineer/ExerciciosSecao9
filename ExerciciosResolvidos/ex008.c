/*
 * ex008.c
 *
 *  Criado em: 22 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>
#include <math.h>

double calculaHipotenusa(double a, double b){
	double hipotenusa = sqrt (a * a + b * b);
	return hipotenusa;
}

int main(){
	double catetoA;
	double catetoB;

	printf("Digite o Valor do Cateto A: ");
	fflush(stdout);
	scanf("%lf", &catetoA);

	printf("Digite o Valor do Cateto B: ");
	fflush(stdout);
	scanf("%lf", &catetoB);

	double hipotenusa = calculaHipotenusa(catetoA, catetoB);

	printf("\nA Hipotenusa e: %.2lf\n", hipotenusa);

	return 0;
}
