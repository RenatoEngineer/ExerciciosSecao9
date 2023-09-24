/*
 * ex070.c
 *
 *  Criado em: 24 de set de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao9
 */

#include <stdio.h>

//Definicao de Estrutura para representar um Numero Racional
struct racional{
	int p, q; //Numerador e Denominador
};

//Calcula o Maximo Divisor Comum (MDC)
int calculaMDC(int a, int b){
	while (b != 0){
		int temporaria = b;
		b = a % b;
		a = temporaria;
	}
	return a;
}

//Reduz um numero Racional para a Forma Simplificada
struct racional reduz(int a, int b){
	int mdc = calculaMDC(a, b);
	struct racional resultado;
	resultado.p = a / mdc;
	resultado.q = b / mdc;
	return resultado;
}

//Calcula o Negativo de um Numero Racional
struct racional neg(struct racional x){
	struct racional resultado;
	resultado.p = -x.p;
	resultado.q = x.q;
	return resultado;
}

//Soma dois Numeros Racionais
struct racional soma(struct racional x, struct racional y){
	struct racional resultado;
	resultado.p = x.p * y.q + y.p * x.q;
	resultado.q = x.q * y.q;
	return reduz(resultado.p, resultado.q);
}

//Multiplica dois Numeros Racionais
struct racional mult(struct racional x, struct racional y){
	struct racional resultado;
	resultado.p = x.p * y.p;
	resultado.q = x.q * y.q;
	return reduz(resultado.p, resultado.q);
}

//Divide dois Numeros Racionais
struct racional div(struct racional x, struct racional y){
	struct racional resultado;
	resultado.p = x.p * y.q;
	resultado.q = x.q * y.p;
	return reduz(resultado.p, resultado.q);
}

int main(){

	int a;
	int b;
	int c;
	int d;

	printf("Digite o Numerador e Denominador de a/b:");
	printf("\nNumerador: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Denominador: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("\nDigite o Numerador e Denominador de c/d:");
	printf("\nNumerador: ");
	fflush(stdout);
	scanf("%d", &c);

	printf("Denominador: ");
	fflush(stdout);
	scanf("%d", &d);

	struct racional x = reduz(a, b);
	struct racional y = reduz(c, d);

	struct racional resultado;

	resultado = neg(x);
	printf("\n-x: %d/%d\n", resultado.p, resultado.q);

	resultado = soma(x, y);
	printf("x + y: %d/%d\n", resultado.p, resultado.q);

	resultado = mult(x, y);
	printf("x * y: %d/%d\n", resultado.p, resultado.q);

	resultado = div(x, y);
	printf("x / y: %d/%d\n", resultado.p, resultado.q);

	return 0;
}
