/*
 * ex013.c
 *
 *  Criado em: 24 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double realizaOperacao(double valor1, double valor2, char operador){
	switch (operador){
	case '+':
		return valor1 + valor2; //Adicao
	case '-':
		return valor1 - valor2; //Subtracao
	case '*':
		return valor1 * valor2; //Multiplicacao
	case '/':
		if (valor2 != 0){
			return valor1 / valor2; //Divisao com verficacao de divisao por zero
		} else {
			printf("\nDivisao por Zero nao e Permitida!!!\n");
			return 0; //Valor Invalido
		}

	default:
		printf("\nOperador Invalido!!!\n");
		return 0; //Operador Invalido
	}
}

int main(){
	double valor1;
	double valor2;
	char operador;

	printf("Digite o Primeiro Valor Numerico: ");
	fflush(stdout);
	scanf("%lf", &valor1);

	printf("Digite o Segundo Valor Numerico: ");
	fflush(stdout);
	scanf("%lf", &valor2);

	printf("\nDigite um Simbolo para a Operacao:\n+ para Soma\n- para Subtracao\n* para Multiplicacao\n/ para Divisao\n\n");
	fflush(stdout);
	scanf(" %c", &operador);

	double resultado = realizaOperacao(valor1, valor2, operador);

	printf("\nResultado da Operacao: %.2lf\n", resultado);

	return 0;
}
