#include <stdio.h>
 
int main() {
 
    int num1, num2, i, soma;
    
    scanf("%d", &num1);
    
    while(scanf("%d", &num2), num2 <= num1);
    
    for(i = 0, soma = 0; soma <= num2; i++)
        soma += i + num1;
    printf("%d\n", i);
 
    return 0;
}