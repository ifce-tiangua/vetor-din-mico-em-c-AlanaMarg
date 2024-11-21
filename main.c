#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor, size;
    scanf("%d", &size);
    
    if(size == 0) {
        printf("[vazio]");
    }
    
    vetor = (int *) malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < size; i++) {
        if(i == 0) {
            printf("[");
        }
        
        printf("%d", vetor[i]);
        
        if(i < size - 1) {
            printf(",");
        } else {
            printf("]");
        }
    }

    return 0;
}