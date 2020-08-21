#include <stdio.h>
 
int main() {
 
    int qC = 0, qR = 0, qS = 0, qT = 0, q, N, i;
    char tipo;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d %c", &q, &tipo);
        if(tipo == 'C')
         qC += q;
        else if(tipo == 'R')
         qR += q;
        else
         qS += q;
        qT += q;
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", qT, qC, qR, qS);
    printf("Percentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n", 100.0*qC/qT, '%', 100.0*qR/qT, '%', 100.0*qS/qT, '%');
 
    return 0;
}
