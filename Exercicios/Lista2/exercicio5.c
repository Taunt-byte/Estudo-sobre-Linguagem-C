/*
 Sabe-se que a fórmula do IMC - Índice de Massa corporal é peso / ( altura)² e indica 
 uma condição de peso de uma pessoa, a partir dos seguintes critérios:
 Abaixo de 18,5 Abaixo do peso
 Entre 18,5 e 25 Peso normal
 Entre 25 e 30 Acima do peso
 Acima de 30 obeso
 
 A partir de tais informações faça um algoritmo e um programa em linguagem C que
 seja capaz de receber o peso e a altura de uma pessoa adulta e imprima o seu IMC
*/

#include<stdio.h>
#include<math.h>

int main()
{
	float peso, altura, imc;
	
	printf("Informe o peso da pessoa..:");
	scanf("%f",&peso);
	printf("Informe a altura da pessoa.:");
	scanf("%f",&altura);
	
	imc = peso/pow(altura,2);
	
	printf("\nIMC.:%f",imc);
	
	if(imc < 18.5)
	{
	 printf("\nAbaixo do peso!!!");
	}
	else if(imc >= 18.5 && imc <= 25)
	{
		printf("\nPeso ideal");	
	}
	else if(imc > 25 && imc <= 30)
	{
		printf("\nAcima do peso!!!");
	}
	else
	{
		printf("\nObeso!!!");
	}
	
	return(0);
}