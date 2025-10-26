#include <stdio.h>
#define TAM 10
#define MAX 20

int main() {
    int nums[TAM], freq[MAX + 1] = {0}, i;
    
    printf("Digite 10 números (0-%d):\n", MAX);
    for(i = 0; i < TAM; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &nums[i]);
        if(nums[i] >= 0 && nums[i] <= MAX) {
            freq[nums[i]]++;
        }
    }
    
    printf("\nVetor: ");
    for(i = 0; i < TAM; i++) printf("%d ", nums[i]);
    
    printf("\n\nFrequência:\n");
    for(i = 0; i <= MAX; i++) {
        if(freq[i] > 0) {
            printf("%d → %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
