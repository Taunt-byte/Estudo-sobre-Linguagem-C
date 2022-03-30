/*
  Programa para calcular o novo salário de um funcionário adicionando
  25% de aumento
*/

#include<stdio.h>

int main() /*Início */
{
	float salarioAtual, salarioNovo; /* Declaração de variáveis (Float = real) */
	
	/*Entrada de dados */
	printf("Informe o salário atual do funcionário:");
	scanf("%f",&salarioAtual);
		
	/*Processamento do novo salário */
	salarioNovo = salarioAtual * 1.25;
	
	/*Saída de dados - Resultado */
	printf("\nO novo salário = %f",salarioNovo);
	
	return(0);
} /*Fim */