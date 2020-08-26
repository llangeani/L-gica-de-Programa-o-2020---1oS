#include <stdio.h>
 
int main() {
 
    int par[5], impar[5], posP = 0, posI = 0, num, i, cont = 15;
    
    while(cont--)
    {
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            par[posP] = num;
            posP++;
        }
        else
        {
            impar[posI] = num;
            posI++;
        }
        if(posP == 5)
        {
            for(i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n", i, par[i]);
                posP = 0;
            }
        }
        else if(posI == 5)
        {
            for(i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n", i, impar[i]);
                posI = 0;
            }
        }
    }
    for(i = 0; i < posI; i++)
        printf("impar[%d] = %d\n", i, impar[i]);
    for(i = 0; i < posP; i++)
        printf("par[%d] = %d\n", i, par[i]);
        
    return 0;
}