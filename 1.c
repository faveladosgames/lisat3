#include <stdio.h>

#define TAM 15

int main(void) {
    float array[TAM];
    float menorValor;
    float maiorValor;

    for (int i = 0; i < TAM; i++) {
        printf("Insira o %do valor: ", i + 1);
        scanf("%f", &array[i]);

        if (i == 0) {
            menorValor = array[i];
            maiorValor = array[i];
        }

        if (array[i] < menorValor) menorValor = array[i];
        if (array[i] > maiorValor) maiorValor = array[i];
    }

    printf("\nMenor valor: %f\n", menorValor);
    printf("Maior valor: %f\n", maiorValor);
    printf("Soma: %f\n", menorValor + maiorValor);
    
    return 0;
}
