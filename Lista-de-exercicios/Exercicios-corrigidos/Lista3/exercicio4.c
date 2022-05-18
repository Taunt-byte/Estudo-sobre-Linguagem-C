/* Faça um programa que leia 10 numeros inteiros e imprima a soma dos pares e soma dos impares */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int num;
	int soma_par=0;
	int soma_impar=0;
	printf("\n Voce pode sair digitanto 0 \n ");
	do{
		printf("Digite um numero inteiro \n");
		scanf("%i",&num);
		if(num%2==0){
			soma_par += num;
			soma_par = soma_par + num;
		}else{
			soma_impar += num;
		}
	}while(num>=0);
		printf("A soma dos numeros pares e: %i \n",soma_par);
		printf("A soma dos numeros impares e: %i \n",soma_impar);
	return 0;
}
