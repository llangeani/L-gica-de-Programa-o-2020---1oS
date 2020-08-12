#include <stdio.h>

int main()
{
	
	double valor;
	int i;
	
	scanf("%lf", &valor);
	printf("NOTAS:\n");
	for (i = 0; valor >= 100.00; i++)
	valor -= 100.00;
	printf("%d nota(s) de R$ 100.00\n", i);
	for (i = 0; valor >= 50.00; i++)
	valor -= 50.00;
	printf("%d nota(s) de R$ 50.00\n", i);
	for (i = 0; valor >= 20.00; i++)
	valor -= 20.00;
	printf("%d nota(s) de R$ 20.00\n", i);
	for (i = 0; valor >= 10.00; i++)
	valor -= 10.00;
	printf("%d nota(s) de R$ 10.00\n", i);
	for (i = 0; valor >= 5.00; i++)
	valor -= 5.00;
	printf("%d nota(s) de R$ 5.00\n", i);
	for (i = 0; valor >= 2.00; i++)
	valor -= 2.00;
	printf("%d nota(s) de R$ 2.00\nMOEDAS:\n", i);
	for(i = 0; valor >= 1.00; i++)
	valor -= 1.00;
	printf("%d moeda(s) de R$ 1.00\n", i);
	for(i = 0; valor >= 0.50; i++)
	valor -= 0.50;
	printf("%d moeda(s) de R$ 0.50\n", i);
	for(i = 0; valor >= 0.25; i++)
	valor -= 0.25;
	printf("%d moeda(s) de R$ 0.25\n", i);
	for(i = 0; valor >= 0.10; i++)
	valor -= 0.10;
	printf("%d moeda(s) de R$ 0.10\n", i);
	for(i = 0; valor >= 0.05; i++)
	valor -= 0.05;
	printf("%d moeda(s) de R$ 0.05\n", i);
    	valor *= 100;
	printf("%.0f moeda(s) de R$ 0.01\n", valor);
	
	return 0;
	
}