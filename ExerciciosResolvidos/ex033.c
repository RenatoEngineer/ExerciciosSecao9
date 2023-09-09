/*
 * ex033.c
 *
 *  Criado em: 9 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Calcula o Fatorial
int fatorial(int n){
	if (n == 0 || n == 1){
		return 1;
	} else {
		return n * fatorial(n - 1);
	}
}

//Calcula a Soma dos Algarismos
int somaAlgarismos(int num){
	int soma = 0;

	while (num != 0){
		soma += num % 10; //Pega o ultimo digito e adiciona a soma
		num /= 10;       //Remove o ultimo digito
	}
	return soma;
}

int main(){

	int n;
	int fatorialN;
	int soma;


	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 0){
		printf("\nNumero Invalido!!!");
	} else {
		fatorialN = fatorial(n);
		soma = somaAlgarismos(fatorialN);

		printf("\nO Fatorial de %d e: %d\n", n, fatorialN);
		printf("\nA soma dos Algarismos de %d e: %d", fatorialN, soma);
	}

	return 0;
}
