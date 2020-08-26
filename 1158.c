#include <stdio.h>
 
int main() {
 
    int casos, num1, num2, i, k;
    
    scanf("%d", &casos);
    
    while(casos--)
    {
        int soma = 0;
        scanf("%d %d", &num1, &num2);
        if (num1 % 2 == 0)
            num1++;
        for (i = num1, k = 0; k < num2; i+= 2, k++)
            soma += i;
        printf("%d\n", soma);
    }
 
    return 0;
}