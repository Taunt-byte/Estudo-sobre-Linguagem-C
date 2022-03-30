#include<stdio.h>

int main()
{
	int num,i,j;
	printf("\nInforme um valor inteiro: ");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	return(0);
}
