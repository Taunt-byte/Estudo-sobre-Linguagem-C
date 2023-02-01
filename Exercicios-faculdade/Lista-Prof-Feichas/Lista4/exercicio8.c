/*
Faça um programa que solicite dois números inteiros e imprima como saída todos os pares compreendidos entre eles
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero1, numero2;
	printf("Digite o 1 numero: ");
	scanf("%d", & numero1);
	printf("Digite o 2 numero: ");
	scanf("%d", & numero2);
	for(numero1 = numero1; numero1 < numero2; numero1++) {
		if(numero1 % 2 != 0) {
			printf("%d\n", numero1);
		}
	}
	
	for(numero2 = numero2; numero2 < numero1; numero2++) {
		if(numero2 % 2 != 0) {
			printf("%d\n", numero2);
		}
	}
	return 0;
}