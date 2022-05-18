/*Fa�a um programa que leia 20 n�meros inteiros e imprima quantos s�o �mpares*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero1, numero2;
	printf("Digite o 1 numero: ");
	scanf("%d", & numero1);
	printf("Digite o 2 numero: ");
	scanf("%d", & numero2);
	
	//M�TODO USANDO WHILE
	while(numero1 < numero2) {
		numero1 = numero1 + 1;
		if(numero1 % 2 != 0) {
			printf("%d\n", numero1);
		}
	}

	while(numero2 < numero1) {
		numero2 = numero2 + 1;
		if(numero2 % 2 != 0) {
			printf("%d\n", numero2);
		}
	}
	return 0;
}
