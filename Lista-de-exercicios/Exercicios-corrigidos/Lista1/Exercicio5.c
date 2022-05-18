/*
  Programa que recebe como entrada dois números inteiros e apresenta 
  como saída qual é o maior deles
*/

#include<stdio.h>

int main() /*Início */
{
    int num1, num2; /* Declaração de variáveis (int = inteiro) */
	
	/*Entrada de dados */
	printf("Informe o primeiro numero.....:");
	scanf("%d",&num1);
	printf("Informe o segundo numero......:");
	scanf("%d",&num2);
	
	/* Processamento e impressão dos resultados */
	if(num1 > num2)
	{
		printf("\nPrimeiro numero maior que o segundo");
		printf("\n%d > %d",num1,num2);
	}
	else
	{
		printf("\nSegundo numero maior que o primeiro");
		printf("\n%d > %d",num2,num1);
	}
	
	return(0);
} /*Fim */