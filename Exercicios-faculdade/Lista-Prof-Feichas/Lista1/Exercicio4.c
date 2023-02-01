/*
  Programa que solicita ao usuário dois números reais e apresente como saída a 
  soma, subtração, multiplicação e divisão destes números
*/

#include<stdio.h>

int main() /*Início */
{
    float num1, num2; /* Declaração de variáveis (float = real) */
	
	/*Entrada de dados */
	printf("Informe o primeiro numero.....:");
	scanf("%f",&num1);
	printf("Informe o segundo numero......:");
	scanf("%f",&num2);
	
	/* Processamento e impressão dos resultados */
	printf("\nSoma = %f", num1 + num2);
	printf("\nSubtracao = %f", num1 - num2);
	printf("\nMultiplicacao = %f", num1 * num2);
	printf("\nDivisao = %f", num1 / num2);
	
	return(0);
} /*Fim */