#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    printf("\nNúmeros entre %d e %d em ordem crescente:\n", num1, num2);
    if(num1 < num2) {
        for(int i = num1 + 1; i < num2; i++) {
            printf("%d ", i);
        }
    } else if(num1 > num2) {
        for(int i = num2 + 1; i < num1; i++) {
            printf("%d ", i);
        }
    } else {
        printf("Os números são iguais, não há números entre eles.");
    }
    
    printf("\n");
    
    return 0;
}
