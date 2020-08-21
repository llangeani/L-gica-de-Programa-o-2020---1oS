#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);
    if(N>=3600)
    {
        printf("%d:", N/3600);
        N -= (N/3600)*3600;
    }
    else
    printf("0:");
    if(N >= 60)
    {
        printf("%d:", N/60);
        N -= (N/60)*60;
    }
    else
    printf("0:");
    printf("%d\n", N);
 
    return 0;
}