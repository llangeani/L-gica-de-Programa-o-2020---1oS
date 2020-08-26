/*-------------------------------
URI Online Judge      |      1534
Autor:   Lucas Langeani
Data:    24/08/2020
Função:  
-------------------------------*/

#include <stdio.h>

int main()
{
	int ordem, linha, coluna;
	
	while (scanf("%d", &ordem) != EOF)
	{
		for (linha = 0; linha < ordem; linha++)
		{
			for (coluna = 0; coluna < ordem; coluna++)
				if (coluna + 1 == ordem - linha)
					printf("2");
				else if (coluna == linha)
					printf("1");
				else
					printf("3");
			printf("\n");
		}
	}
	return 0;
}