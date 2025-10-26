#include <stdio.h>
#define TAMANHO 8

int main() {
    int numeros[TAMANHO];
    int i, j, temp;
    
    printf("Digite 8 números:\n");
    for(i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nArray original: ");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    
    for(i = 0; i < TAMANHO - 1; i++) {
        for(j = 0; j < TAMANHO - 1 - i; j++) {
            if(numeros[j] < numeros[j + 1]) {
         
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    
    printf("\nArray ordenado (decrescente): ");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
