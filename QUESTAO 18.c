#include <stdio.h>
#include <string.h>

#define TAMANHO 100

int main() {
    char palavra1[TAMANHO], palavra2[TAMANHO];
    
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    printf("\n=== RESULTADO ===\n");
    
    if(strcmp(palavra1, palavra2) == 0) {
        printf("As palavras são IGUAIS!\n");
    } else {
        printf("As palavras são DIFERENTES!\n");
    }
    
    printf("\nPalavra 1: %s\n", palavra1);
    printf("Palavra 2: %s\n", palavra2);
    
    return 0;
}
