#include <stdio.h>
#define N 3

int main() {
    int m[N][N], i, j;
    int soma_linha[N] = {0}, soma_coluna[N] = {0};
    int diag1 = 0, diag2 = 0;
    
    printf("Matriz 3x3: ");
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            scanf("%d", &m[i][j]);
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            soma_linha[i] += m[i][j];
            soma_coluna[j] += m[i][j];
            if(i == j) diag1 += m[i][j];
            if(i + j == N - 1) diag2 += m[i][j];
        }
    }
    
    int soma_magica = soma_linha[0];
    int magico = 1;
    
    for(i = 0; i < N; i++) {
        if(soma_linha[i] != soma_magica || soma_coluna[i] != soma_magica) {
            magico = 0;
            break;
        }
    }
    if(diag1 != soma_magica || diag2 != soma_magica) magico = 0;
    
    printf("\nMatriz:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) printf("%2d ", m[i][j]);
        printf("\n");
    }
    
    printf("\nResultado: %s\n", magico ? "QUADRADO MÁGICO" : "Não é mágico");
    if(magico) printf("Soma mágica: %d\n", soma_magica);
    
    return 0;
}
