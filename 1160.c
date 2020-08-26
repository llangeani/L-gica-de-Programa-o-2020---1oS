#include <stdio.h>
 
int main() 
{
 
    int T, PA, PB;
    double G1, G2, P1, P2;
    
    scanf("%d", &T);
    
    while(T--)
    {
        int t;
        
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        P1 = PA;
        P2 = PB;
        for(t = 0; PA <= PB; t++)
        {
            P1 = PA;
            P2 = PB;
            PA = (int)P1*(1+G1/100);
            PB = (int)P2*(1+G2/100);
            if(t > 100)
                break;
        }
        if(t > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", t);
        
    }
 
    return 0;
}