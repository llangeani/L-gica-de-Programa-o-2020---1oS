#include <stdio.h>
 
int main() {
 
    int senha;
    
    while(scanf("%d", &senha), senha != 2002)
    {
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
 
    return 0;
}