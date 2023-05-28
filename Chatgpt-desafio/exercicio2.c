#include <stdio.h>

int main() {
    float metros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    printf("%.2f metros correspondem a:\n", metros);
    printf("%.2f decimetros\n", metros * 10);
    printf("%.2f centimetros\n", metros * 100);
    printf("%.2f milimetros\n", metros * 1000);

    return 0;
}
