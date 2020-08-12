#include <stdio.h>
 
int main() {
 
    double renda;
    scanf("%lf", &renda);
    if(renda >= 0 && renda <= 2000)
    printf("Isento\n");
    else if(renda > 2000 && renda <= 3000)
    printf("R$ %.2lf\n", (renda - 2000.0) * 0.8);
    else if(renda > 3000 && renda <= 4500)
    printf("R$ %.2lf\n", (1000.0 * 0.08) + (renda - 3000.0) * 0.18);
    else if(renda > 4500)
    printf("R$ %.2lf\n", ((renda - 4500.0) * 0.28) + 1000.0 * 0.08 + 1500.0 * 0.18);
 
    return 0;
}