#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(void) {
    srand(time(NULL));

    int start;
    int end;
    printf("Insira o intervalo: ");
    scanf("%d %d", &start, &end);

    int array[TAM];
    for (int i = 0; i < TAM; i++) {
        array[i] = (rand() % end) + start;
    }


    
    return 0;
}
