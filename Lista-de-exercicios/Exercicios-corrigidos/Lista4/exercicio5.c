/*
Faça um programa que receba 20 números inteiros e imprima quantos deles são maiores que 50
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite valores inteiros");
    scanf("%i",&num);
    //Verifica se numeros são maiores que 50
    if(num>=50){
        printf("Esses numeros são maiores que 50");
    }if(num<=50){
        printf("Esses numeros são menores que 50");
    }
}