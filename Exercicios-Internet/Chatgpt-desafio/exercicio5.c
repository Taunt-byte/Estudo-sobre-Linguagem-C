#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }

    return 0;
}
