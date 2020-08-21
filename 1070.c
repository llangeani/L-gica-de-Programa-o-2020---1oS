#include <stdio.h>
 
int main() {
 
    int X, i, k = 0;
    scanf("%d", &X);
    if(X % 2 == 0)
    {
        for(i = 1; k < 6 ; i += 2)
        {
            printf("%d\n", X+i);
            k++;
        }
    }
    else
    {
        for(i = 0; k < 6; i += 2)
        {
            printf("%d\n", X+i);
            k++;
        }
    }
 
    return 0;
}