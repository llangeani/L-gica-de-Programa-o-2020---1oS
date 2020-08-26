#include <stdio.h>
 
int main() {
 
    int matriz[1000], T, i, aux;
    
    scanf("%d", &T);
    for(i = 0, aux = 0; i < 1000; i++, aux++)
    {
        if(aux == T)
            aux = 0;
        matriz[i] = aux;
        printf("N[%d] = %d\n", i, aux);
    }
 
    return 0;
}