#include <stdio.h>
 
int main() {
 
    double matriz[100];
    int i;
    
    scanf("%lf", &matriz[0]);
    for(i = 0; i < 99; i++)
    {
        matriz[i+1] = matriz[i]/2;
        printf("N[%d] = %.4lf\n", i, matriz[i]);
    }
    printf("N[%d] = %.4lf\n", i, matriz[i]);
 
    return 0;
}