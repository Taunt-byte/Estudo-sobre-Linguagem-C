#include <stdio.h>
#include <math.h>

int main() {
   double num, root;

   printf("Digite um número: ");
   scanf("%lf", &num);

   root = sqrt(num);

   printf("A raiz quadrada de %lf é %lf\n", num, root);

   return 0;
}
