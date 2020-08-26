#include <stdio.h>
 
int main() {
 
    float matriz[100];
    int i;
    
    for(i = 0; i < 100; i++)
        scanf("%f", &matriz[i]);
    for(i = 0; i < 100; i++)
        if(matriz[i] <= 10)
            printf("A[%d] = %.1f\n", i, matriz[i]);
 
    return 0;
}