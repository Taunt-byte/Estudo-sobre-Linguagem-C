#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int minimumNumber(int n, char password[]) {
    int upper = 0, lower = 0, digit = 0, special = 0, v = 0;
    for (int i = 0; i < strlen(password); i++) {
        char ch = password[i];
        if (isupper(ch)) {
            upper++; // Conta o número de letras maiúsculas
        } else if (islower(ch)) {
            lower++; // Conta o número de letras minúsculas
        } else if (isdigit(ch)) {
            digit++; // Conta o número de dígitos
        } else {
            special++; // Conta o número de caracteres especiais
        }
    }
    if (upper == 0) {
        v++; // Incrementa a contagem de requisitos faltantes se não houver letras maiúsculas
    }
    if (lower == 0) {
        v++; // Incrementa a contagem de requisitos faltantes se não houver letras minúsculas
    }
    if (digit == 0) {
        v++; // Incrementa a contagem de requisitos faltantes se não houver dígitos
    }
    if (special == 0) {
        v++; // Incrementa a contagem de requisitos faltantes se não houver caracteres especiais
    }
    if (n <= 6) {
        return fmax(v, 6 - n); // Retorna o máximo entre a contagem de requisitos faltantes (v) e a diferença entre 6 e o tamanho da senha (n) se n for menor ou igual a 6
    } else {
        return v; // Retorna a contagem de requisitos faltantes (v)
    }
}

int main() {
    int n, answer;
    char password[100];
    scanf("%d", &n); // Lê o número de senhas a serem verificadas
    for (int i = 0; i < n; i++) {
        scanf("%s", password); // Lê cada senha
        answer = minimumNumber(strlen(password), password); // Chama a função minimumNumber para determinar se a senha é "fraca" ou "forte"
        if (answer > 0) {
            printf("weak\n"); // Imprime "weak" se a senha for considerada fraca
        } else {
            printf("strong\n"); // Imprime "strong" se a senha for considerada forte
        }
    }
    return 0;
}
