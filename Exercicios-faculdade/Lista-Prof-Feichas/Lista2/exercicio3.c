/* 
 Faça um programa em linguagem C que solicite o salário bruto de
 um funcionário e imprima como saída o salário líquido a partir 
 dos seguintes critérios:
 salário abaixo de R$2500 - Desconto de 11%
 salário entre R$2500 e R$3700 - Desconto de 15%
 salário acima de R$3700 - Desconto de 25%
*/
#include<stdio.h>

int main()
{
	float salarioBruto, salarioLiquido;
	printf("Informe o salario bruto do funcionario..:");
	scanf("%f",&salarioBruto);
	if(salarioBruto < 2500)
	{
		salarioLiquido = salarioBruto - (salarioBruto * 0.11);		
	}
	else if (salarioBruto >= 2500 && salarioBruto < 3700)
	{
		salarioLiquido = salarioBruto - (salarioBruto * 0.15);
	}
	else
	{
		salarioLiquido = salarioBruto - (salarioBruto * 0.25);
	}
	printf("O salario liquido do funcionario = %f",salarioLiquido);
	return(0);
}