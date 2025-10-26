#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

int main() {
    int original[TAM], unicos[TAM], i, j, unico, count = 0;
    
    srand(time(NULL));
    
    for(i = 0; i < TAM; i++) {
        original[i] = rand() % 21;
    }
    
    printf("Original: [");
    for(i = 0; i < TAM; i++) {
        printf("%d%s", original[i], (i < TAM - 1) ? ", " : "]\n");
    }
    
    for(i = 0; i < TAM; i++) {
        unico = 1;
        for(j = 0; j < count; j++) {
            if(original[i] == unicos[j]) {
                unico = 0;
                break;
            }
        }
        if(unico) {
            unicos[count++] = original[i];
        }
    }
    
    printf("Únicos:   [");
    for(i = 0; i < count; i++) {
        printf("%d%s", unicos[i], (i < count - 1) ? ", " : "]\n");
    }
    printf("Total únicos: %d\n", count);
    
    return 0;
}
