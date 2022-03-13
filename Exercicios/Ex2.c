#include <stdio.h>

int main()
{

	int idade;
	printf("digite a idade do jogador: ");
	scanf("%i", &idade);
	if(idade >= 5 && idade <= 7)
{
	printf("infantil A");
}
	if(idade >= 8 && idade <= 10)
{
	printf("infantil B");
}
	if(idade >= 11 && idade <= 13)
{
	printf("juvenil A");
}
	if(idade >= 14 && idade <= 17)
{
	printf("juvenil B");
}
	if(idade >= 18)
{
	printf("adultos");
}

	

	






}

