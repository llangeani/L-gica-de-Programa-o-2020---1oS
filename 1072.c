#include <stdio.h>
 
int main() {
 
    int N, X, i, k = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &X);
        if(X >= 10 && X <= 20)
        k++;
    }
    printf("%d in\n%d out\n", k, N-k);

    return 0;
}