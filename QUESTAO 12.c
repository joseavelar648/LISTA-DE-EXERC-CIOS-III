#include <stdio.h>
#define TAM 5

int main() {
    int v1[TAM], v2[TAM], i, resultado = 0;
    
    printf("Vetor 1 (5 números): ");
    for(i = 0; i < TAM; i++) scanf("%d", &v1[i]);
    
    printf("Vetor 2 (5 números): ");
    for(i = 0; i < TAM; i++) scanf("%d", &v2[i]);
    

    for(i = 0; i < TAM; i++) resultado += v1[i] * v2[i];
    

    printf("\nV1 = ");
    for(i = 0; i < TAM; i++) printf("%d ", v1[i]);
    
    printf("\nV2 = ");
    for(i = 0; i < TAM; i++) printf("%d ", v2[i]);
    
    printf("\n\nV1 • V2 = %d\n", resultado);
    
    return 0;
}
