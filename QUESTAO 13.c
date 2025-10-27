#include <stdio.h>
#define L 3
#define C 3

int main() {
    int mat[L][C], i, j, soma, maior_soma = 0, linha_maior = 0;
    
    printf("Informe 9 números para a matriz 3x3:\n");
    for(i = 0; i < L; i++) {
        printf("Linha %d: ", i + 1);
        for(j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nMatriz e somas:\n");
    for(i = 0; i < L; i++) {
        soma = 0;
        for(j = 0; j < C; j++) {
            printf("%3d ", mat[i][j]);
            soma += mat[i][j];
        }
        printf(" = %d\n", soma);
        
        if(soma > maior_soma) {
            maior_soma = soma;
            linha_maior = i;
        }
    }
    
    printf("\nLinha com maior soma: %d (soma = %d)\n", linha_maior + 1, maior_soma);
    
    return 0;
}
