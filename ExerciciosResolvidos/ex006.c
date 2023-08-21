/*
 * ex006.c
 *
 *  Criado em: 20 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

int converteParaSegundos(int horas, int minutos, int segundos){
	int totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
	return totalSegundos;
}

int main(){

	int horas;
	int minutos;
	int segundos;

	printf("Digite as horas: ");
	fflush(stdout);
	scanf("%d", &horas);

	printf("Digite os Minutos: ");
	fflush(stdout);
	scanf("%d", &minutos);

	printf("Digite os Segundos: ");
	fflush(stdout);
	scanf("%d", &segundos);

	if (horas >= 0 && minutos >= 0 && segundos >= 0 && minutos < 60 && segundos < 60){
		int totalSegundos = converteParaSegundos(horas, minutos, segundos);
		printf("\nO Tempo Total em Segundos e: %d segundos\n", totalSegundos);
	} else {
		printf("\nValores Invalidos para Horas, Minutos ou Segundos.\n");
	}

	return 0;
}
