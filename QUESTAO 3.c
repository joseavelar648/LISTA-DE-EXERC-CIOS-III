#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    int numeros[n];
    int soma_pares = 0, soma_impares = 0;
    
    printf("\nDigite %d números:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(numeros[i] % 2 == 0) {
            soma_pares += numeros[i];
        } else {
            soma_impares += numeros[i];
        }
    }
  
    printf("\nArray digitado: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("Soma dos números pares: %d\n", soma_pares);
    printf("Soma dos números ímpares: %d\n", soma_impares);
    printf("Soma total: %d\n", soma_pares + soma_impares);
    
    return 0;
}
