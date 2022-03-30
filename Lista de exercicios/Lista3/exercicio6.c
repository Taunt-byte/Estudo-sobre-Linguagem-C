/*Faca um programa que leia 10 números inteiros e imprima media aritmética dos pares e dos ím-
pares*/

#include <stdio.h>

int main(){
	int num,i,somaPar=0,somaImpar=0;
	float media;
	
	for(i=1;i<=10;i++){
		printf("\nInforme o numero..:");
		scanf("%d",&num);
		
		if(num % 2 == 0){
			somaPar++;
		}
		else{
			somaImpar++;
		} 
	}
	media = somaPar + somaImpar /10;
	
	printf("media de par e impar: %i \n", media);
}