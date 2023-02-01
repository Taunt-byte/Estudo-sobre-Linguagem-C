/*
Faça  um  programa  que  receba  10  números  inteiros  e  imprima  quantos  deles  são  positivos  e
quantos são negativos
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite numeros inteiros");
    scanf("%i",num);

    if(num<=0){
        printf("Esse numero é negativo");
    }if(num>=0){
        printf("Esse numero é positivo");
    }
}