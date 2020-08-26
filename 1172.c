#include <stdio.h>
 
int main() {
 
    int matriz[10], i;
    
    for(i = 0; i < 10; i++)
        scanf("%d", &matriz[i]);
        
    for(i = 0; i < 10; i++)
    {
        if(matriz[i] <= 0)
            matriz[i] = 1;
        printf("X[%d] = %d\n", i, matriz[i]);
    }
 
    return 0;
}