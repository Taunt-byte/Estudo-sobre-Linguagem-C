/* 
   Faça um programa em linguagem C que solicite 
   um valor inteiro e imprima o seu triplo caso 
   ele seja múltiplo de 5 
*/

#include<stdio.h>

int main()
{
	int valor;
	
	printf("Informe um valor inteiro..:");
	scanf("%d",&valor);
	
	if(valor % 5 == 0)
	{
		printf("O triplo do valor informado = %d", valor*3);
	}
	else
	{
		printf("Valor nao multiplo de 5");
	}
	return(0);
}