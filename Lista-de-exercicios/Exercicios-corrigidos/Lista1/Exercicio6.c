/*
  Programa que solicita ao usuário um número inteiro e 
  informa se ele é par ou ímpar
*/

#include<stdio.h>

int main() /*Início */
{
    int num; /* Declaração de variáveis (int = inteiro) */
	
	/*Entrada de dados */
	printf("Informe um numero inteiro.....:");
	scanf("%d",&num);
	
	/* Processamento e impressão do resultado */
	if(num % 2 == 0)
	{
		printf("\nNumero par");
	}
	else
	{
		printf("\nNumero impar");
	}
	
	return(0);
} /*Fim */