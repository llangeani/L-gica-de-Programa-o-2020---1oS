#include <stdio.h>
 
int main() {
    
    int num1, i, k, soma;
 
    while(scanf("%d", &num1), num1)
    {
        soma = 0;
        if(num1 % 2 != 0)
            num1++;
        for(i = num1, k = 0 ; k < 5; i += 2, k++)
            soma += i;
        printf("%d\n", soma);
    }
 
    return 0;
}