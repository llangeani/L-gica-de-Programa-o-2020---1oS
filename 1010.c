#include <stdio.h>
 
int main() {
 
    int cod, num;
    float valor, total = 0;
    scanf("%d %d %f", &cod, &num, &valor);
    total = total + valor * num;
    scanf("%d %d %f", &cod, &num, &valor);
    total = total + valor * num;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}