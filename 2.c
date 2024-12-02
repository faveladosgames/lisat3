#include <stdio.h>
#include <stdbool.h>

#define TAM 100

bool contains(int size, char* buffer, char target) {
    for (int i = 0; i < size; i++) {
        if (buffer[i] == target) {
            return true;
        }
    }

    return false;
}

int main(void) {
    char buffer[TAM];
    char target;

    printf("Insira um texto: ");
    fgets(buffer, TAM, stdin);
    
    printf("Insira um caractere: ");
    scanf(" %c", &target);

    printf("O texto informado contem%s o caractere solicitado\n", (contains(TAM, buffer, target)) ? "nao" : "");
    return 0;
}
