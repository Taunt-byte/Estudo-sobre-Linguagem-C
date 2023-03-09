#include <stdio.h>

int main() {
   int a = 10;  // declaração de uma variável inteira
   int *p;      // declaração de um ponteiro para int

   p = &a;      // atribuição do endereço da variável a ao ponteiro p

   printf("Valor de a: %d\n", a);          // imprime o valor de a
   printf("Endereço de a: %p\n", &a);     // imprime o endereço de a
   printf("Valor de p: %p\n", p);         // imprime o valor de p (endereço de a)
   printf("Conteúdo apontado por p: %d\n", *p);  // imprime o valor armazenado no endereço apontado por p

   return 0;
}
