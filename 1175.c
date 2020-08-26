#include <stdio.h>
 
int main() {
 
    int matriz[20], i, aux;
    
    for(i = 0; i < 20; i++)
        scanf("%d", &matriz[i]);
    for(i = 0; i < 20 - i; i++)
    {
        aux = matriz[i];
        matriz[i] = matriz[19-i];
        matriz[19-i] = aux;
    }
    for(i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, matriz[i]);
        
    return 0;
}