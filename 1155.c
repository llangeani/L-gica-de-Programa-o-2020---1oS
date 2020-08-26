/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100
*/

#include <stdio.h>
 
int main() {
 
    int i;
    float S = 0;
    
    for (i = 1; i < 101; i++)
        S += (float)1/i;
        
    printf("%.2f\n", S);
 
    return 0;
}