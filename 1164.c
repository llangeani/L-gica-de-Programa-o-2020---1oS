#include <stdio.h>
 
int main() 
{
 
    unsigned int casos;
    
    scanf("%u", &casos);
    while(casos--)
    {
        unsigned int num, i, soma;
        scanf("%u", &num);
        for(i = 1, soma = 0; i < num; i++)
          if(num % i == 0)
            soma += i;

        if(soma == num)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }
 
    return 0;
}