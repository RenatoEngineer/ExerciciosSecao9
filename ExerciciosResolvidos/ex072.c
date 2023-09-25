/*
 * ex072.c
 *
 *  Criado em: 25 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

struct Vetor{
	float x;
	float y;
	float z;
};

//Calcula a soma de dois vetores e Armazena o Resultado em resultado.
void soma(struct Vetor* v1, struct Vetor* v2, struct Vetor* resultado){
	resultado->x = v1->x + v2->x;
	resultado->y = v1->y + v2->y;
	resultado->z = v1->z + v2->z;
}

int main(){

	struct Vetor vetor1, vetor2, resultado;

	vetor1.x = 0;
	vetor1.y = 0;
	vetor1.z = 0;

	vetor2.x = 0;
	vetor2.y = 0;
	vetor2.z = 0;

	printf(".:: Digite os Parametros do Vetor 1 ::.\n");
	printf("X: ");
	fflush(stdout);
	scanf("%f", &vetor1.x);

	printf("Y: ");
	fflush(stdout);
	scanf("%f", &vetor1.y);

	printf("Z: ");
	fflush(stdout);
	scanf("%f", &vetor1.z);

	printf("\n.:: Digite os Parametros do Vetor 2 ::.\n");
	printf("X: ");
	fflush(stdout);
	scanf("%f", &vetor2.x);

	printf("Y: ");
	fflush(stdout);
	scanf("%f", &vetor2.y);

	printf("Z: ");
	fflush(stdout);
	scanf("%f", &vetor2.z);

	//Chama a funcao soma para Calcular a soma dos vetores e armazenar em resultado
	soma(&vetor1, &vetor2, &resultado);

	printf("\nResultado da Soma: (%.2f, %.2f, %.2f)\n", resultado.x, resultado.y, resultado.z);

	return 0;
}
