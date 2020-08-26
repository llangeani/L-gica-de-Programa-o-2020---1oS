/*-------------------------------
URI Online Judge      |      1238
Autor:   Lucas Langeani
Data:    23/08/2020
Função:  
-------------------------------*/

#include <stdio.h>
 
int main() {

    int N, i, j;
    char c1[51], c2[51];

    for (scanf("%d", &N); N; N--)
    {
        scanf ("%s %s", c1, c2);
        for (i = 0, j = 0; c1[i] != '\0' || c2[j] != '\0'; )
        {
            if (c1[i] != '\0')
            {
                printf("%c", c1[i]);
                i++;
            }
            if (c2[j] != '\0')
            {
                printf("%c", c2[j]);
                j++;
            }
        }
        printf("\n");
    }
 
    return 0;
}