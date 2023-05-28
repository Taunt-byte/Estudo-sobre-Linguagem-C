#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    
    printf("Hello, World!\n"); // Imprime a mensagem "Hello, World!"
    
    fgets(s, sizeof(s), stdin); // Lê uma linha de entrada do usuário e armazena na variável 's'
    s[strcspn(s, "\n")] = '\0'; // Remove o caractere de nova linha ('\n') do final da string
    
    printf("%s\n", s); // Imprime a string 's'
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
