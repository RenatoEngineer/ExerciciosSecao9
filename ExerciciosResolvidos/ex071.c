/*
 * ex071.c
 *
 *  Criado em: 24 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

struct Ponto{
	int x;
	int y;
};

//Verifica se um Ponto esta dentro de um retangulo
int dentroRetangulo(struct Ponto v1, struct Ponto v2, struct Ponto p){
	//Verifica se as Coordenadas do ponto p estao dentro dos limites do retangulo
	if (p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y){
		return 1; //O ponto esta dentro do retangulo
	} else {
		return 0; //O ponto esta fora do retangulo
	}
}

int main(){

	struct Ponto v1, v2, p;

	//Coordenadas dos Vertices do Retangulo
	v1.x = 0;
	v1.y = 0;
	v2.x = 0;
	v2.y = 0;

	//Coordenadas do ponto a ser verificado
	p.x = 0;
	p.y = 0;

	printf("Digite as Coordenadas dos Vertices do Retangulo:\n");
	printf("v1 x: ");
	fflush(stdout);
	scanf("%d", &v1.x);

	printf("v1 y: ");
	fflush(stdout);
	scanf("%d", &v1.y);

	printf("v2 x: ");
	fflush(stdout);
	scanf("%d", &v2.x);

	printf("v2 y: ");
	fflush(stdout);
	scanf("%d", &v2.y);

	printf("\nDigite as Coordenadas do Ponto a ser Verificado:\n");
	printf("p x: ");
	fflush(stdout);
	scanf("%d", &p.x);

	printf("p y: ");
	fflush(stdout);
	scanf("%d", &p.y);

	//Chama a Funcao dentroRetangulo para verficar se o ponto esta dentro do retangulo
	if (dentroRetangulo(v1, v2, p)){
		printf("\nO Ponto (%d, %d) esta dentro do Retangulo!!!\n", p.x, p.y);
	} else {
		printf("\nO Ponto (%d, %d) esta fora do Retangulo!!!\n", p.x, p.y);
	}

	return 0;
}
