/*
 * ex015.c
 *
 *  Criado em: 26 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int formaTriangulo(float a, float b, float c){
	return (a + b > c && a + c > b && b + c > a);
}

void determinaTipoTriangulo(float a, float b, float c){
	if (a == b && b == c){
		printf("\nTriangulo Equilatero!\n");
	} else if (a == b || a == c || b == c){
		printf("\nTriangulo Isosceles!\n");
	} else {
		printf("\nTriangulo Escaleno!\n");
	}
}

int main(){
	float a;
	float b;
	float c;

	printf("Digite a Primeira Medida do Triangulo: ");
	fflush(stdout);
	scanf("%f", &a);

	printf("Digite a Segunda Medida do Triangulo: ");
	fflush(stdout);
	scanf("%f", &b);

	printf("Digite a Terceira Medida do Triangulo: ");
	fflush(stdout);
	scanf("%f", &c);

	if (a > 0 && b > 0 && c > 0){
		if (formaTriangulo(a, b, c)){
			determinaTipoTriangulo(a, b, c);
		} else {
			printf("\nOs Lados nao Formam um Triangulo!!!\n");
		}
	} else {
		printf("\nValores Invalidos para as Medidas dos Lados\n");
	}

	return 0;
}
