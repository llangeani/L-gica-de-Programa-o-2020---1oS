#include <stdio.h>
 
int main() {
 
    char e1[13], e2[9], e3[11];
    
    scanf("%s %s %s", e1, e2, e3);
    if (e1[0] == 'v')
    {
        if (e2[0] == 'a')
            if (e3[0] == 'c')
            printf("aguia\n");
            else
            printf("pomba\n");
        else
            if (e3[0] == 'o')
            printf("homem\n");
            else
            printf("vaca\n");
    }
    else
        if (e2[0] == 'i')
            if (e3[2] == 'm')
            printf("pulga\n");
            else
            printf("lagarta\n");
        else
            if (e3[0] == 'h')
            printf("sanguessuga\n");
            else
            printf("minhoca\n");
    
    return 0;
}