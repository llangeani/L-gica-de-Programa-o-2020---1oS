#include <stdio.h>
 
int main() {
 
    unsigned long long int Fib[61] = {0, 1};
    int casos, termo, i;
    
    for(i = 2; i < 61; i++)
        Fib[i] = Fib[i-1] + Fib[i-2];
    scanf("%d", &casos);
    while(casos--)
    {
        scanf("%d", &termo);
        printf("Fib(%d) = %llu\n", termo, Fib[termo]);
    }
    
    return 0;
}