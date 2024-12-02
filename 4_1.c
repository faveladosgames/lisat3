#include <stdio.h>
#include <stdbool.h>

#define TAM 100

int len(char* buffer) {
    int i = 0;
    while (buffer[i] != '\0')
        i++;
    return i;
}

bool equals(char* str1, char* str2) {
    int len1 = len(str1);
    int len2 = len(str2);

    if (len1 != len2)
        return false;

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}

int main(void) {
    char str1[TAM];
    printf("Insira um texto: ");
    fgets(str1, TAM, stdin);

    char str2[TAM];
    printf("Insira outro texto: ");
    fgets(str2, TAM, stdin);

    printf("Os dois textos%s sao iguais\n", equals(str1, str2) ? "" : " nao");
    return 0;
}
