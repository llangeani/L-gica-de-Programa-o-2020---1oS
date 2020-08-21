#include <stdio.h>
 
int main() {
 
    int t;
    scanf("%d", &t);
    if(t >= 365)
    {
        printf("%d ano(s)\n", t/365);
        t -= (t/365)*365;
    }
    else
    printf("0 ano(s)\n");
    if(t >= 30)
    {
        printf("%d mes(es)\n", t/30);
        t -= (t/30)*30;
    }
    else
    printf("0 mes(es)\n");
    printf("%d dia(s)\n", t);
    return 0;
}