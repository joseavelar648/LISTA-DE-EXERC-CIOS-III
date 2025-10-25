#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int vogais = 0, consoantes = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    for(int i = 0; i < strlen(palavra); i++) {
        char c = tolower(palavra[i]);
        
        if(isalpha(c)) {
            switch(c) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vogais++;
                    break;
                default:
                    consoantes++;
            }
        }
    }
    
    printf("\nResultados:\n");
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    
    return 0;
}
