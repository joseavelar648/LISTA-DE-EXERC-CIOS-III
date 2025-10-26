#include <stdio.h>
#define TAM 10

int main() {
    int nums[TAM], i, max_pos = 0, min_pos = 0;
    
    printf("Digite 10 números:\n");
    for(i = 0; i < TAM; i++) {
        printf("[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    
    for(i = 1; i < TAM; i++) {
        if(nums[i] > nums[max_pos]) max_pos = i;
        if(nums[i] < nums[min_pos]) min_pos = i;
    }
    
    printf("\nArray: ");
    for(i = 0; i < TAM; i++) printf("%d ", nums[i]);
    
    printf("\nMaior: %d (posição %d)", nums[max_pos], max_pos);
    printf("\nMenor: %d (posição %d)\n", nums[min_pos], min_pos);
    
    return 0;
}
