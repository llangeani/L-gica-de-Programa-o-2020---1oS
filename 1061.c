#include <stdio.h>
 
int main() {
 
    int diai, hi, mi, si, diaf, hf, mf, sf, difd, difh, difm, difs;
    char dia[5];
    scanf("%s %d", dia, &diai);
    scanf("%d %s %d %s %d", &hi, dia, &mi, dia, &si);
    scanf("%s %d", dia, &diaf);
    scanf("%d %s %d %s %d", &hf, dia, &mf, dia, &sf);
    difd = diaf - diai;
    difh = hf - hi;
    if( difh < 0 )
    {
        difd--;
        difh += 24;
    }
    difm = mf - mi;
    if( difm < 0 )
    {
        difh--;
        difm += 60;
    }
    difs = sf - si;
    if( difs < 0 )
    {
        difm--;
        difs += 60;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", difd, difh, difm, difs);
    
    return 0;
}