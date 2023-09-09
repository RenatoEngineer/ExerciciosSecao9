/*
 * ex031.c
 *
 *  Criado em: 9 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double numeroEuler(int n){
	double euler = 1.0;
	double termo = 1.0;

	for (int i = 1; i <= n; i ++){
		termo /= i;
		euler += termo;
	}

	return euler;
}

int main(){

	int numTermos;
	double euler;

	printf("Digite o Numero de Termos para Calcular o Numero de Euler (Neperiano): ");
	fflush(stdout);
	scanf("%d", &numTermos);

	if (numTermos < 0){
		printf("\nO Numero de Termos nao deve ser Negativo!!!");
	} else {
		euler = numeroEuler(numTermos);
		printf("\nO Numero de Euler com %d termos e aproximadamente %.15lf", numTermos, euler);
	}

	return 0;
}
