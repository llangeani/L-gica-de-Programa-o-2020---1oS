#include <stdio.h>
 
int main() {
 
    float salario;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 400)
     printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n", salario*1.15, salario*.15, '%');
    else if (salario <= 800)
     printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n", salario*1.12, salario*.12, '%');
    else if (salario <= 1200)
     printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n", salario*1.10, salario*.10, '%');
    else if (salario <= 2000)
     printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n", salario*1.07, salario*.07, '%');
    else
     printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n", salario*1.04, salario*.04, '%');
 
    return 0;
}