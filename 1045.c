#include <stdio.h>
 
int main() {
 
    double A, B, C, T = 0;
    int i;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    for (i = 0; T != -1; i++)
    {
        T = -1;
        if (B < C)
        {
            T = B;
            B = C;
            C = T;
        }
        else if (A < B)
        {
            T = A;
            A = B;
            B = T;
        }
        else if (A < C)
        {
            T = A;
            A = C;
            C = T;
        }
    }
    if (A >= B + C)
    printf("NAO FORMA TRIANGULO\n");
    else if (A*A == B*B + C*C)
    printf("TRIANGULO RETANGULO\n");
    else if (A*A > B*B + C*C)
    printf("TRIANGULO OBTUSANGULO\n");
    else if (A*A < B*B + C*C)
    printf("TRIANGULO ACUTANGULO\n");
    if (A == B && B == C)
    printf("TRIANGULO EQUILATERO\n");
    else if (A == B || B == C)
    printf("TRIANGULO ISOSCELES\n");
    
    return 0;
}