/*
 Faça um programa que leia 10 números inteiros
 e imprima quantos são pares e quantos são ímpares
*/

#include<stdio.h>

int main()
{
	int num,i,somaPar=0,somaImpar=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\nInforme o numero..:");
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			somaPar++;
		}
		else
		{
			somaImpar++;
		} 
	}
	printf("\nQuantidade de numeros pares = %d",somaPar);
	printf("\nQuantidade de numeros impares = %d",somaImpar);
	
	return(0);
}
