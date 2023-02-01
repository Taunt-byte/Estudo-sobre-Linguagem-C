/*Faça um programa que leia um conjunto de números inteiros e imprima quantos deles são múlti-
plos de 3 e quantos são de 5*/

#include <stdio.h>

int main(void)
{
int i,n;

printf("Informe um numero inteiro \n");
scanf ("%i",&n);

for (i=0;i<=n;i++)
{
    if(i%3==0)
    {
    printf("\n %i -numero multiplo de 3 \n", i);
    }
    if(i%5==0)
    {
    printf("\n %i -numero multiplo de 5 \n", i);
    }
    else
    {
    printf("\n %i nao e multiplo de 3 e 5 \n",i);
    }

}
return 0;
}
