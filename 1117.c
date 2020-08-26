#include <stdio.h>
 
int main() {
 
    int i = 0;
    float V[2], soma = 0;
    
    while(scanf("%f", &V[i]), i != 2)
    {
        if (V[i] < 0 || V[i] > 10)
            printf("nota invalida\n");
        else
        {
            soma += V[i];
            i++;
        }
    }
    printf("media = %.2f\n", soma/2);
 
    return 0;
}