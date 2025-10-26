#include <stdio.h>

int main() {
    int numero, original;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    original = numero;
    

    if(numero == 0) {
        printf("Número original: 0\n");
        printf("Número invertido: 0\n");
        return 0;
    }
    

    int digitos[10];
    int contador = 0;
    

    while(numero != 0) {
        digitos[contador] = numero % 10;
        numero = numero / 10;
        contador++;
    }
    

    int invertido = 0;
    for(int i = 0; i < contador; i++) {
        invertido = invertido * 10 + digitos[i];
    }
    
    printf("Número original: %d\n", original);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
