/*	
URI Online Judge     |      2242
Autor: 	Lucas Langeani
Data:  	21/08/2020
Função: extrair as vogais de uma 
	string  e  comparar  sua 
	equidistância das pontas
-----------------------	      */

#include <stdio.h>
 
int main() {
 
    // declaração de variáveis
    char rs[51], t[51];
    int i, j;		
    
    //	lendo o valor de uma string com scanf e um vetor 
    //	pesquisa de vogais utilizando contadores
    scanf("%s", rs);
    for(i = 0, j = 0; rs[i] != '\0'; i++)	
		if(rs[i] == 'a' || rs[i] == 'e' || rs[i] == 'i' || rs[i] == 'o' || rs[i] == 'u')
		{
			t[j] = rs[i];
			j++;
		}
	
	//	preparando contadores para varrer os elementos do vetor vogais
	i = 0;
		
    //	j é o número de vogais, então o índice dos elementos é j-1
    //	teste para igualdade dos elementos equidistante das pontas
    //	para um número par de vogais não há elemento central
    //	para um número ímpar de vogais, o elemento central tem índice j/2
    if(j % 2 == 0)
		while (i < j-1 && t[i] == t[j-1])
		{
			i++;
			j--;
		}
	else
		while (i != j-1 && t[i] == t[j-1])
		{
			i++;
			j--;
		}
	
	// vogais equidistantes iguais, imprime S
	// vogais equidistantes diferentes, imprime N
	if(t[i] == t[j-1])	
		printf("S\n");
	else
		printf("N\n");		

    return 0;
}
