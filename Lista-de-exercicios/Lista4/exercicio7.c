/*
Faça um programa que receba um número inteiro e imprima como resultado o seu fatorial
*/

#include <stdio.h>

int main(){
    int num,resp;

    printf("Digite um numero para ser fatorado");
    scanf("%i",num);

    for( ; num >= 1; --num){
        resp *= num;
    }
    printf("O numero fatorial e %i\n",resp);
}