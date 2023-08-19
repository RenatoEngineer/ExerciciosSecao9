/*
 * ex002.c
 *
 *  Criado em: 19 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void imprimeData(int dia, int mes, int ano) {
  char meses[12][10] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

  printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main() {

	int dia;
	int mes;
	int ano;

	printf("Digite o dia: ");
	fflush(stdout);
	scanf("%d", &dia);

	printf("Digite o mes: ");
	fflush(stdout);
	scanf("%d", &mes);

	printf("Digite o ano: ");
	fflush(stdout);
	scanf("%d", &ano);

	printf("\nData: %02d/%02d/%d\n\n", dia, mes, ano);

	imprimeData(dia, mes, ano);

  return 0;
}


