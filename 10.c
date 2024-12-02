#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(void) {
    srand(time(NULL));

    int target;
    printf("Insira um valor: ");
    scanf("%d", &target);
    
    int matrix[N][N];
    int count = 0;

    puts("\nMatriz:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int value = rand() % 100;
            printf("%d ", value);
            matrix[i][j] = value;

            if (value == target) {
                count++;
            }
        }

        printf("\n");
    }
    
    printf("\nQuantidade que o valor informado aparece: %d\n", count);
    return 0;
}
