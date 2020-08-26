/*-------------------------------
URI Online Judge      |      1184
Autor:   Lucas Langeani
Data:    24/08/2020
Função:  
-------------------------------*/


#include <stdio.h>
 
int main() 
{
 
    char O;
    int linha, coluna, elementos = 0;
    float soma = 0, matriz[12][12];
    
    scanf(" %c", &O);
    for (linha = 0; linha < 12; linha++)
        for (coluna = 0; coluna < 12; coluna++)
        {
            scanf("%f", &matriz[linha][coluna]);
            if (linha > coluna)
            {
                soma += matriz[linha][coluna];
                elementos++;
            }
        }
    if(O == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/elementos);
        
    return 0;
}