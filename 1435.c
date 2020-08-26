/*-------------------------------
URI Online Judge      |      1435
Autor:   Lucas Langeani
Data:    24/08/2020
Função:  
-------------------------------*/

#include <stdio.h>

int main()
{
	int ordem, ordeminterna, linha, coluna;
	
	while (scanf("%d", &ordem), ordem)
	{
		int matriz[ordem][ordem], elemento = 1;
		
		for (ordeminterna = 0; elemento <= ordem + 1/2; ordeminterna++, elemento++)
			for (coluna = 0 + ordeminterna; coluna + ordeminterna < ordem; coluna++)
				for (linha = 0 + ordeminterna ; linha + ordeminterna < ordem; linha++)
					matriz[linha][coluna] = elemento;
				
		for (linha = 0; linha < ordem; linha++)
		{
			for (coluna = 0; coluna < ordem; coluna++)
				if (coluna == 0)
					printf("%3d", matriz[linha][coluna]);
				else
					printf(" %3d", matriz[linha][coluna]);
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}