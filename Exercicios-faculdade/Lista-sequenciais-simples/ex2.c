/*
  Programa que recebe a idade de uma pessoa e apresenta como 
  saída quantos dias ela já viveu
*/

#include <stdio.h>

int main(){
    int idade,dias;

    printf("Informe a sua idade: \n");
    scanf("%d",idade);

    idade = dias * 365;

    printf("Você ja viveu: %d",dias);
}