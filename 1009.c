#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, montante;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);
    printf("TOTAL = R$ %.2lf\n", salario + montante * .15);
 
    return 0;
}