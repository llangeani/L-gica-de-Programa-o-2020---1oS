#include <stdio.h>
 
int main() {
 
    int X, i;
    scanf("%d", &X);
    if(X % 2 == 0)
    {
        for(i = 1; i < X; i += 2)
        printf("%d\n", i);
    }
    else
    {
        for(i = 1; i <= X; i += 2)
        printf("%d\n", i);
    }
    
    return 0;
}