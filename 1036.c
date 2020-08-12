#include <stdio.h>
#include <math.h>
 
int main() {
 
double A, B, C, d;

    scanf("%lf %lf %lf", &A, &B, &C);
    d = B * B - 4 * A * C;
    if(A == 0.0 || d < 0.0)
    printf("Impossivel calcular\n");
    else
    printf("R1 = %.5lf\nR2 = %.5lf\n", (- B + sqrt(d))/(2 * A), (- B - sqrt(d))/(2 * A));

 
    return 0;
}