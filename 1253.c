/*-------------------------------
URI Online Judge      |      1253
Autor:   Lucas Langeani
Data:    23/08/2020
Função:  Descriptografia de N sentenças
         de até 50 caracteres maiúsculos,
         deslocados P passos à direita.
-------------------------------*/

#include <stdio.h>

int main()
{
    int  N,
         P,
         i;
		 
    char frase[51];
		 
    for (scanf("%d", &N); N; N--)
    {
        scanf("%s %d", frase, &P);
        for (i = 0; frase[i] != '\0'; i++)
        {
			if(frase[i] -  P < 'A' )
			    printf("%c", frase[i] - P + 26);
			else
				printf("%c", frase[i] - P);
        }
        printf("\n");
    }

    return 0;
}