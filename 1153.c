#include <stdio.h>
 
int main() {
 
    int num, i, fatorial = 1;
    
    scanf("%d", &num);
    
    for (i = 0; i < num; i++)
        fatorial *= (num - i);
    printf("%d\n", fatorial);
 
    return 0;
}