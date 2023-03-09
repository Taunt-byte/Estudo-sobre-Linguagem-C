/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa dois laços de repetição "for", um para percorrer os números de 1 a 9 (i), 
e outro para percorrer os números de 1 a 10 (j) e exibir as multiplicações correspondentes. 
A cada iteração do primeiro laço, a tabuada do número correspondente é exibida.
*/

#include <stdio.h>

int main() {
    int i, j;

    // exibe a tabuada de 1 a 9
    for (i = 1; i <= 9; i++) {
        printf("Tabuada do %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
