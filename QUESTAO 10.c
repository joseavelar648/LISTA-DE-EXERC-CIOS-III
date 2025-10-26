#include <stdio.h>
#define L 4
#define C 4

int main() {
    int mat[L][C], i, j, maior;
    
    printf("Informe 16 números para a matriz 4x4:\n");
    for(i = 0; i < L; i++) {
        printf("Linha %d: ", i + 1);
        for(j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nMatriz:\n");
    for(i = 0; i < L; i++) {
        maior = mat[i][0];
        for(j = 0; j < C; j++) {
            printf("%3d ", mat[i][j]);
            if(mat[i][j] > maior) maior = mat[i][j];
        }
        printf("  → Maior: %d\n", maior);
    }
    
    return 0;
}  
