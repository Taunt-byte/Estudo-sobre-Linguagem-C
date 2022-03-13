#include<stdio.h>

	int main(){ 


	char sexo;
	float altura;

	printf("sexo ");
	scanf("%c" ,&sexo);

	printf("altura ");
	scanf("%f" ,&altura);

	if(sexo =='m' || sexo =='M'){

	printf("Peso masculino = %f",((72.7*altura)-58));
}
	if(sexo == 'F' || sexo == 'f'){

	printf("Peso feminino = %f" ,((62.1*altura)-44.7));
}
	
}
	




