#include <stdio.h>
#define TAMANHO 5

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int centro = TAMANHO / 2; 
    
    for(i = 0; i < TAMANHO; i++) {
        for(j = 0; j < TAMANHO; j++) {
            matriz[i][j] = 0;
        }
    }
    
    for(i = 0; i < TAMANHO; i++) {
        matriz[centro][i] = 1;
        matriz[i][centro] = 1; 
    }
    printf("Matriz 5x5 com cruz central:\n\n");
    for(i = 0; i < TAMANHO; i++) {
        for(j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
