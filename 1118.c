#include <stdio.h>
 
int main() {
 
    int cond = 1;
    
    while(cond - 2)
    {
        float nota[2], soma = 0;
        int i = 0;
        
        while(i < 2)
        {
            scanf("%f", &nota[i]);
            
            if(nota[i] < 0 || nota[i] > 10)
                printf("nota invalida\n");
            else
            {
                soma += nota[i];
                i++;
            }
        }
        printf("media = %.2f\n", soma/2);
        cond = 0;
        
        while(cond != 1 && cond != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &cond);
        }
    }
 
    return 0;
}