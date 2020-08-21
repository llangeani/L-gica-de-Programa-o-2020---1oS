#include <stdio.h>
 
int main() {
 
    int h0, hf, h, m0, mf, m;
    
    scanf("%d %d %d %d", &h0, &m0, &hf, &mf);
    if( h0 == hf && m0 == mf)
    h = 24;
    else
    h = hf - h0;
    m = mf - m0;
    if( m < 0 )
    {
        m += 60;
        h--;
            if ( h < 0 )
            h += 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
 
    return 0;
}