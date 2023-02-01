/*
  Programa que recebe duas notas de um aluno e calcula a média aritmética:
  Media = (nota1 + nota2)/2
  A partir da média calculada, informar sua situação de acordo com o seguinte critério:
  Se média >= 6 – Aluno aprovado
  Se média < 6 - Aluno reprovado
*/

#include<stdio.h>

int main() /*Início */
{
    float nota1, nota2, media; /* Declaração de variáveis (float = real) */
	
	/*Entrada de dados */
	printf("Informe a primeira nota do aluno...:");
	scanf("%f",&nota1);
	printf("Informe a segunda nota do aluno....:");
	scanf("%f",&nota2);
	
	/* Processamento da média do aluno */
	media = (nota1 + nota2)/2;
	
	/* Resultado */
	printf("\nA media do aluno = %f",media);
	if(media < 6)
	{
		printf("\nAluno reprovado!!!");
	}
	else
	{
		printf("\nAluno aprovado!!!");
	}
	
	return(0);
} /*Fim */