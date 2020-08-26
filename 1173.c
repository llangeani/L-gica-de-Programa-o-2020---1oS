#include <stdio.h>
 
int main() {
 
    int matriz[10], i;
    
    scanf("%d", &matriz[0]);
    
    for(i = 0; i < 9; i++)
    {
        matriz[i+1] = matriz[i]*2;
        printf("N[%d] = %d\n", i, matriz[i]);
    }
    printf("N[9] = %d\n", matriz[9]);
 
    return 0;
}