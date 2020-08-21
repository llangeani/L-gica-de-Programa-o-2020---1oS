#include <stdio.h>
 
int main() {
 
    int hf, hi;
    scanf("%d %d", &hi, &hf);
    if(hi == hf)
    printf("O JOGO DUROU 24 HORA(S)\n");
    else if(hi < hf)
    printf("O JOGO DUROU %d HORA(S)\n", hf-hi);
    else
    printf("O JOGO DUROU %d HORA(S)\n", 24+hf-hi);
 
    return 0;
}