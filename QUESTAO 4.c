#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    char string_numero[20];
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if(numero < 0) {
        printf("Erro: O número deve ser positivo!\n");
        return 1;
    }
    
    sprintf(string_numero, "%d", numero);
    int quantidade_digitos = strlen(string_numero);
    
    printf("O número %d tem %d dígito(s).\n", numero, quantidade_digitos);
    
    return 0;
}
