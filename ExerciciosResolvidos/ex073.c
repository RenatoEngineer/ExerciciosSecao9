/*
 * ex073.c
 *
 *  Criado em: 25 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

struct Habitante{
	char sexo;
	char olhos;
	char cabelos;
	int idade;
};

//Le os dados dos Habitantes e Armazena em um Vetor
void leDados(struct Habitante habitantes[], int nHab){
	for (int i = 0; i < nHab; i++){
		printf("Habitante %d:\n", i + 1);
		printf("Sexo (M/F): ");
		fflush(stdout);
		scanf(" %c", &habitantes[i].sexo);

		printf("Cor dos Olhos (A/C): ");
		fflush(stdout);
		scanf(" %c", &habitantes[i].olhos);

		printf("Cor dos Cabelos (L/P/C): ");
		fflush(stdout);
		scanf(" %c", &habitantes[i].cabelos);

		printf("Idade: ");
		fflush(stdout);
		scanf("%d", &habitantes[i].idade);

		printf("\n");
	}
}

//Calcula a media de idade de pessoas com olhos castanhos e cabelos pretos
float mediaIdadeOlhosCastanhosCabelosPretos(struct Habitante habitantes[], int nHab){
	int somaIdades = 0;
	int contador = 0;

	for (int i = 0; i < nHab; i++){
		if (habitantes[i].olhos == 'C' && habitantes[i].cabelos == 'P'){
			somaIdades += habitantes[i].idade;
			contador++;
		}
	}

	if (contador > 0){
		return (float)somaIdades / contador;
	} else {
		return 0.0; //Nao ha habitantes com olhos castanhos e cabelos pretos
	}
}

//Encontra a Maior Idade entre os Habitantes
int maiorIdade(struct Habitante habitantes[], int nHab){
	int maxIdade = habitantes[0].idade;

	for (int i = 1; i < nHab; i++){
		if (habitantes[i].idade > maxIdade){
			maxIdade = habitantes[i].idade;
		}
	}

	return maxIdade;
}

//Conta o Numero de Mulheres entre 18 e 35 anos com olhos azuis e cabelos louros
int contaMulheresAzuisLouros(struct Habitante habitantes[], int nHab){
	int contador = 0;

	for (int i = 0; i < nHab; i++){
		if (habitantes[i].sexo == 'F' && habitantes[i].idade >= 18 && habitantes[i].idade <= 35 && habitantes[i].olhos == 'A' && habitantes[i].cabelos == 'L'){
			contador++;
		}
	}

	return contador;
}

int main(){

	int nHab = 5; //Numero de Habitantes
	struct Habitante habitantes[nHab];

	//Le os dados dos habitantes
	leDados(habitantes, nHab);

	//Calcula a media de idade de Pessoas com Olhos castanhos e Cabelos pretos
	float media = mediaIdadeOlhosCastanhosCabelosPretos(habitantes, nHab);
	printf("\nMedia de Idade de Pessoas com Olhos Castanhos e Cabelos Pretos: %.2f\n", media);

	//Encontra a maior idade entre os Habitantes
	int maxIdade = maiorIdade(habitantes, nHab);
	printf("Maior Idade entre os Habitantes: %d\n", maxIdade);

	//Conta o numero de Mulheres entre 18 e 35 anos com olhos azuis e cabelos louros
	int mulheresAzuisLouros = contaMulheresAzuisLouros(habitantes, nHab);
	printf("Numero de Mulheres entre 18 e 35 anos com Olhos Azuis e Cabelos Louros: %d\n", mulheresAzuisLouros);

	return 0;
}
