/*
 * ex014.c
 *
 *  Criado em: 26 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

void verificaConsumo(float distanciaKm, float litrosGasolina){
	float consumo = distanciaKm / litrosGasolina;

	if (consumo < 8){
		printf("\nVenda o Carro!\n");
	} else if (consumo >= 8 && consumo <= 14){
		printf("\nEconomico!\n");
	} else {
		printf("\nSuper Economico!\n");
	}
}

int main(){
	float distanciaKm;
	float litrosGasolina;

	printf("Digite a Distancia em Km: ");
	fflush(stdout);
	scanf("%f", &distanciaKm);

	printf("Digite a Quantidade de Litros de Gasolina Consumidos: ");
	fflush(stdout);
	scanf("%f", &litrosGasolina);

	if (litrosGasolina > 0){
		verificaConsumo(distanciaKm, litrosGasolina);
	} else {
		printf("\nQuantidade de Litros de Gasolina Invalida!!!\n");
	}

	return 0;
}
