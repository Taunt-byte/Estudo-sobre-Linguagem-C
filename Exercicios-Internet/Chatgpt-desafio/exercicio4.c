#include <stdio.h>

int main() {
    int num, soma = 0, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        soma += i;
    }

    printf("Soma dos numeros de 1 a %d: %d\n", num, soma);

    return 0;
}
