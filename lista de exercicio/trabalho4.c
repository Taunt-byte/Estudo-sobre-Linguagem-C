#include<stdio.h>

	int main(){ 

	int numero;
	int soma;
	
	for(int c = 0; c<10; c++){
	printf("digite um numero ");
	scanf("%i", &numero);
	}
	if(numero %2 != 0){
	soma = numero + soma ;
}

	printf("a soma dos numeros é = %i" , soma);
	
}