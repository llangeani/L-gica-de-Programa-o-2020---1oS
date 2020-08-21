#include <stdio.h>
 
int main() {
 
    int A, B, i;
    
    scanf("%d %d", &A, &B);
    if(A > B)
    {
        i = A;
        A = B;
        B = i;
    }
    if(A <= 0 || B <= 0)
    printf("Nao sao Multiplos\n");
    else if (A == 1)
    printf("Sao Multiplos\n");
    else
    {
        for(i = 2; A % i != 0 || i < A; i++);
        if (B % i == 0)
        printf("Sao Multiplos\n");
        else
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}