/*
 * ex069.c
 *
 *  Criado em: 23 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula o Maximo Divisor Comum (MDC)
int calculaMDC(int a, int b){
	while (b != 0){
		int temporaria = b;
		b = a % b;
		a = temporaria;
	}
	return a;
}

//Simplifica Fracao
void simplificaFracao(int fracao[]){
	int numerador = fracao[0];
	int denominador = fracao[1];

	int mdc = calculaMDC(numerador, denominador);
	fracao[0] /= mdc;
	fracao[1] /= mdc;
}

//Soma duas Fracoes
void somaFracao(int fracao1[], int fracao2[]){
	int numeradorResultado = (fracao1[0] * fracao2[1]) + (fracao2[0] * fracao1[1]);
	int denominadorResultado = fracao1[1] * fracao2[1];

	int resultado[2] = {numeradorResultado, denominadorResultado};
	simplificaFracao(resultado);

	printf("\nSoma: %d/%d\n", resultado[0], resultado[1]);
}

//Subtrai duas Fracoes
void subtraiFracao(int fracao1[], int fracao2[]){
	int numeradorResultado = (fracao1[0] * fracao2[1]) - (fracao2[0] * fracao1[1]);
	int denominadorResultado = fracao1[1] * fracao2[1];

	int resultado[2] = {numeradorResultado, denominadorResultado};
	simplificaFracao(resultado);

	printf("Subtracao: %d/%d\n", resultado[0], resultado[1]);
}

//Multiplica duas Fracoes
void multiplicaFracao(int fracao1[], int fracao2[]){
	int numeradorResultado = fracao1[0] * fracao2[0];
	int denominadorResultado = fracao1[1] * fracao2[1];

	int resultado[2] = {numeradorResultado, denominadorResultado};
	simplificaFracao(resultado);

	printf("Produto: %d/%d\n", resultado[0], resultado[1]);
}

//Dividir duas Fracoes
void divideFracao(int fracao1[], int fracao2[]){
	int numeradorResultado = fracao1[0] * fracao2[1];
	int denominadorResultado = fracao1[1] * fracao2[0];

	int resultado[2] = {numeradorResultado, denominadorResultado};
	simplificaFracao(resultado);

	printf("Quociente: %d/%d\n", resultado[0], resultado[1]);
}

int main(){

	int fracao1[2];
	int fracao2[2];

	printf(".:: Digite a Primeira Fracao ::.\n");
	printf("Numerador: ");
	fflush(stdout);
	scanf("%d", &fracao1[0]);

	printf("Denominador: ");
	fflush(stdout);
	scanf("%d", &fracao1[1]);

	printf("\n.:: Digite a Segunda Fracao ::.\n");
	printf("Numerador: ");
	fflush(stdout);
	scanf("%d", &fracao2[0]);

	printf("Denominador: ");
	fflush(stdout);
	scanf("%d", &fracao2[1]);

	simplificaFracao(fracao1);
	simplificaFracao(fracao2);

	somaFracao(fracao1, fracao2);
	subtraiFracao(fracao1, fracao2);
	multiplicaFracao(fracao1, fracao2);
	divideFracao(fracao1, fracao2);

	return 0;
}
