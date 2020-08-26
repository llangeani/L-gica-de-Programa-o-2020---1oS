/*-------------------------------
URI Online Judge      |      2709
Autor:   Lucas Langeani
Data:    24/08/2020
Status:  Time Limit Exceeded
-------------------------------*/


#include <stdio.h>
#include <math.h>

int main()
{
	int M, i;
	
	while(scanf("%d", &M))
	{
		unsigned int V[M], N, soma = 0;
		
		for(i = 0; i < M; i++)
			scanf("%u", &V[i]);
		
		scanf("%u", &N);
	
		for(i = M - 1 ; i >= 0 ; i -= N)
			soma += V[i];
	
		if (soma != 2 && soma % 2 == 0 || soma == 1)
		{
			printf("Bad boy! I'll hit you.\n");
		}
    else if (soma == 2 || soma == 5 || soma == 7)
    {
      printf("You're a coastal aircraft, Robbie, a large silver aircraft.\n");
      return 0;
    }
		else
			for(i = 3; i <= sqrt(soma) ; i += 2)
				if(soma % i == 0)
				{
					printf("Bad boy! I'll hit you.\n");
					break;
				}
				else
				{
					printf("You're a coastal aircraft, Robbie, a large silver aircraft.\n");
          printf("i = %d, soma = %d", i , soma);
					return 0;
				}
  }
	return 0;
}