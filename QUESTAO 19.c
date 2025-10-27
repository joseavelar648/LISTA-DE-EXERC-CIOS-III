#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 100

int main() {
    char palavra[TAMANHO];
    int contador = 0;
    
    printf("Digite uma palavra ou frase: ");
    fgets(palavra, TAMANHO, stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    
    for(int i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] == 'a') {
            contador++;
        }
    }
    
    printf("String digitada: \"%s\"\n", palavra);
    printf("Quantidade de letras 'a': %d\n", contador);
    
    return 0;
}
