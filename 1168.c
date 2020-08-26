/*-------------------------------
URI Online Judge      |      1168
Autor:   Lucas Langeani
Data:    23/08/2020
Função:  calcular a quantidade
         de LEDS necessários para
representar números de 1 a 10^100
-------------------------------*/

#include <stdio.h>

int main()
{
    int  N,       //número N de casos
	     qtdLED,  //quantidade total de LEDS necessários
		 i,       //contador de casos
		 j,       //contador para varrer matriz valor
	     LED[10]  //matriz com quantidade de LEDS para cada número
		 = {6,2,5,5,4,5,6,3,7,6}; //LED[0] = qtd de LEDS para 0
		 
    char valor[101];  //matriz para capturar valor de até 10^100 e \0
    
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", valor);
		for(j = 0, qtdLED = 0; valor[j] != '\0'; j++)  //condição de parada é final da string ('\0')
			qtdLED += LED[(int)valor[j] - 48];         //subtrair 48 - transformação de valor dos
		printf("%d leds\n", qtdLED);                   //números unitários em ASCII para inteiro
	}
	
    return 0;
}