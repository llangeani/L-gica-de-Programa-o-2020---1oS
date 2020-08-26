#include <stdio.h>
 
int main() {
 
    int num, i, fib[50];
    
    fib[0] = 0;
    fib[1] = 1;
    scanf("%d", &num);
    printf("%d %d ", fib[0], fib[1]);
    
    for (i = 2; i < num; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        if (i < num - 1)
            printf("%d ", fib[i]);
        else
            printf("%d\n", fib[i]);
    }
    
    return 0;
}