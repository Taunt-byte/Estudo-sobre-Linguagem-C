/*
 Faça um programa em linguagem C que solicite duas notas bimestrais de um aluno, 
 imprima a sua média artimética e a situação segundo o seguinte critério:
 Reprovado - Media inferior a 3
 Aprovado - Média maior ou igual a 7
 Exame final - Media entre 3 e 7
 
 Obs: Caso o aluno esteja de exame final deverá ser solicitado a nota deste exame que
      para aprovação deve ser superior a 5
*/

#include<stdio.h>

int main()
{
	float nota1, nota2, media, notaExame;
	
	printf("Informe a nota1 do aluno.:");
	scanf("%f",&nota1);
	printf("Informe a nota2 do aluno.:");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("\nMedia do aluno.:%f",media);
	
	if(media < 3)
	{
	 printf("\nAluno reprovado!!!");
	}
	else if(media >=3 && media <7)
	{
		printf("\nAluno de exame final!!!");
		printf("\nInforme a nota do aluno no exame final..:");
		scanf("%f",&notaExame);
		
		if(notaExame < 5)
		{
			printf("\nAluno reprovado!!!");
		}
		else
		{
			printf("\nAluno aprovado!!!");
		}
	}
	else
	{
		printf("\nAluno aprovado!!!");
	}
	
	return(0);
}