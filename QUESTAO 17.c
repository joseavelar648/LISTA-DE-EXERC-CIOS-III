#include <stdio.h>

int main() {
    double numero;
    
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    printf("\n=== RESULTADO ===\n");
    
    if(numero > 0) {
        printf("O número %.2f é POSITIVO\n", numero);
    } else if(numero < 0) {
        printf("O número %.2f é NEGATIVO\n", numero);
    } else {
        printf("O número é ZERO\n");
    }
    
    return 0;
}
