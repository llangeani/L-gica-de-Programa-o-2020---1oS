#include <stdio.h>
 
int main() {
    
    int X, i;
 
    while(scanf("%d", &X), X)
    {
        for (i = 1; i <= X; i++)
            if (i != X)
                printf("%d ", i);
            else
                printf("%d\n", i);
    }
 
    return 0;
}