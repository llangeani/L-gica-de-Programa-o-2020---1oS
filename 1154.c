#include <stdio.h>
 
int main() {
 
    int idade, qtd = 0, idadetotal = 0;
    
    while(scanf("%d", &idade), idade >= 0)
    {
        idadetotal += idade;
        qtd++;
    }
    printf("%.2f\n", (float)idadetotal/qtd);
 
    return 0;
}