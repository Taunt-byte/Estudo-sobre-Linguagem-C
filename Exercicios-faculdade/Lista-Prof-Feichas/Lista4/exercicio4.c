/*
Faça um programa que leia dez números inteiros e mostre como saída o maior deles
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2;

    printf("Programa que exibe o maior numero entre uma seguencia");
    printf("Digite dois numero inteiro");
    scanf("%i",num1,num2);

    if(num1>=num2){
        printf("O numero: %i é maior",num1);
    }if(num1<=num2){
        printf("O numero: %i é menor",num1);
    }
}