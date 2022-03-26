/*
  Programa que recebe a idade de uma pessoa e apresenta como 
  saída quantos dias ela já viveu
*/

#include<stdio.h>

int main() /*Início */
{
	int idade, dias; /* Declaração de variáveis (int = inteiro) */
	
	/*Entrada de dados */
	printf("Informe a idade da pessoa...:");
	scanf("%d",&idade);
		
	/*Processamento da idade em dias */
	dias = idade * 365;
	
	/*Saída de dados - Resultado */
	printf("\nDias vividos pela pessoa = %d",dias);
	
	return(0);
} /*Fim */