
#include <stdio.h>
#define N 4

int main() {
    int mat[N][N], i, j, soma = 0;
    
    printf("Informe 16 números para a matriz 4x4:\n");
    for(i = 0; i < N; i++) {
        printf("Linha %d: ", i + 1);
        for(j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i = 0; i < N; i++) {
        soma += mat[i][i];
    }
    
    printf("\nMatriz:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSoma da diagonal principal: %d\n", soma);
    
    return 0;
}
