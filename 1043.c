#include <stdio.h>
 
int main() {
 
    float A, B, C;
    
    scanf("%f %f %f", &A, &B, &C);
    if(A <= 0 || B <= 0 || C <= 0 || A >= B + C || B >= A + C || C >= A + B)
    printf("Area = %.1f\n", (A + B)*C/2);
    else
    printf("Perimetro = %.1f\n", A + B + C);
    
    return 0;
}