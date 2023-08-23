/*
 * ex011.c
 *
 *  Criado em: 23 de ago de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

double calculaMedia(char letra, double nota1, double nota2, double nota3){
	if (letra == 'A' || letra == 'a'){
		return (nota1 + nota2 + nota3) / 3.0; //Media Aritmetica
	} else if (letra == 'P' || letra == 'p'){
		return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10.0; //Media Ponderada
	} else {
		printf("\nLetra Invalida! Use A para Media Aritmetica ou P para Media Ponderada");
		return -1; //Valor Invalido para Media
	}
}

int main(){
	double nota1;
	double nota2;
	double nota3;
	char letra;

	printf("Digite a Primeira Nota do Aluno: ");
	fflush(stdout);
	scanf("%lf", &nota1);

	printf("Digite a Segunda Nota do Aluno: ");
	fflush(stdout);
	scanf("%lf", &nota2);

	printf("Digite a Terceira Nota do Aluno: ");
	fflush(stdout);
	scanf("%lf", &nota3);

	printf("\nDigite A para Media Aritmetica ou P para Media Ponderada: ");
	fflush(stdout);
	scanf(" %c", &letra);

	double media = calculaMedia(letra, nota1, nota2, nota3);

	if (media >= 0){
		printf("\nA Media do Aluno e: %.2lf\n", media);
	}

	return 0;
}
