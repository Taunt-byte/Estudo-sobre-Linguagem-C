/*
Faça um programa em linguagem C que solicite a entradade de três
valores inteiros, N1, N2 e N3 e informe se a soma de N1 e N3 é maior que N2
*/

#include<stdio.h>

int main()
{
	int n1, n2, n3, soma;
	
	printf("Informe tres valores inteiros.: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	soma = n1 + n3;
	
	if(soma > n2)
	{
		printf("%d + %d = %d maior que %d",n1,n3,soma,n2);
	}
	else if(soma == n2)
	{
		printf("%d + %d = %d igual a %d",n1,n3,soma,n2);
	}
	else
	{
		printf("%d + %d = %d menor que %d",n1,n3,soma,n2);
	}
	
	return(0);
}