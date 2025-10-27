#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 100

int main() {
    char palavra[TAMANHO], palavra_invertida[TAMANHO];
    int i, j, tamanho;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tamanho = strlen(palavra);
    
    for(i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        palavra_invertida[j] = palavra[i];
    }
    palavra_invertida[j] = '\0';
    
    printf("Palavra original: %s\n", palavra);
    printf("Palavra invertida: %s\n", palavra_invertida);
    
    if(strcmp(palavra, palavra_invertida) == 0) {
        printf("\n✅ '%s' é um PALÍNDROMO!\n", palavra);
    } else {
        printf("\n❌ '%s' NÃO é um palíndromo.\n", palavra);
    }
    
    return 0;
}
