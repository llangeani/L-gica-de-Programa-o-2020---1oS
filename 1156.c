/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    float num, den;
    float S = 1;
    
    for (num = 3.0, den = 2.0; num < 40; )
    {
        S += num/den;
        num += 2;
        den *= 2;
    }
 
    printf("%.2f\n", S);
    return 0;
}