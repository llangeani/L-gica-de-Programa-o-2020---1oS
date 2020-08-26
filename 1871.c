/*-------------------------------
URI Online Judge      |      1871
Autor:	 Lucas Langeani
Data:	 23/08/2020
Função:	 algoritmo para eliminar
		 os zeros de uma soma de
		 dois números inteiros.
-------------------------------*/

#include <stdio.h>
#include <math.h>

int main() 
{
	
	int M,	//números
		N,	//inteiros
		S,	//soma de M e N
		S0,	//soma sem 0
		i;	//contador
	
	while (scanf("%d %d", &M, &N)	//entrada de dois números
				   , M && N != 0)	//condição de parada - números são nulos
	{
		S = M + N;
			
		for (i = 0, S0 = 0; S != 0 ; )		//algoritmo para testar o número
		{									//da casa dos decimais, um a um
			if (S % 10 != 0)				//há incremento do valor S se a
			{								//casa decimal de S é != de 0
				S0 += S % 10 * pow(10, i);  //o contador i é a ordem 10^i
				i++;						//do valor incrementado
			}
			S = S / 10;						//diminui a ordem da soma S
		}
		printf("%d\n", S0);
	}

	return 0;
}