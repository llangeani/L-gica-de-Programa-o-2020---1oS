#include <stdio.h>
 
int main() {
 
    int n, i, nP = 0 , nI = 0, nn = 0, np = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if(n == 0)
        nP++;
        else if(n > 0)
        {
            np++;
            if(n % 2 == 0)
            nP++;
            else
            nI++;
        }
        else
        {
            nn++;
            if(n % 2 == 0)
            nP++;
            else
            nI++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", nP, nI, np, nn);
    
    return 0;
}