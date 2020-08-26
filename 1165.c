#include <stdio.h>
 
int main() 
{
    unsigned int casos;
    scanf("%u", &casos);
    
    while(casos--)
    {
        unsigned int num, i;
        
        scanf("%u", &num);
        for(i = 2; i < num; i++)
            if(num % i == 0)
                break;
        
        if(i == num)
            printf("%u eh primo\n", num);
        else
            printf("%u nao eh primo\n", num);
    }
 
    return 0;
}