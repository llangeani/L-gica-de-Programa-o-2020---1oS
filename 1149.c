#include <stdio.h>
 
int main() {
 
    int num, i, limite, soma = 0;
    
    scanf("%d %d", &num, &limite);
    
    while (limite < 1)
        scanf("%d", &limite);
    for (i = 0; i < limite; i++)
        soma += num + i;
    printf("%d\n", soma);
 
    return 0;
}