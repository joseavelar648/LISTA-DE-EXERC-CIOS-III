#include <stdio.h>
#define TAM 10

int main() {
    int num[TAM], i, j, unico, achou = 0;
    
    printf("Digite 10 números:\n");
    for(i = 0; i < TAM; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    printf("\nNúmeros únicos: ");
    for(i = 0; i < TAM; i++) {
        unico = 1;
        for(j = 0; j < TAM; j++) {
            if(i != j && num[i] == num[j]) {
                unico = 0;
                break;
            }
        }
        if(unico) {
            printf("%d ", num[i]);
            achou = 1;
        }
    }
    
    if(!achou) printf("Nenhum");
    printf("\n");
    
    return 0;
}
