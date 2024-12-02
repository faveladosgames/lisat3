#include <stdio.h>
#include <string.h>

#define TAM 100

int main(void) {
    char str1[TAM];
    printf("Insira um texto: ");
    fgets(str1, TAM, stdin);

    char str2[TAM];
    printf("Insira outro texto: ");
    fgets(str2, TAM, stdin);

    printf("Os dois textos%s sao iguais\n", (strcmp(str1, str2) == 0) ? "" : " nao");
    return 0;
}
