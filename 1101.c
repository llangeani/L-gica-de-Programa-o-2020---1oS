#include <stdio.h>
 
int main() {
 
    int M, N, i, s;
    
    scanf("%d %d", &M, &N);
    while (M > 0 && N > 0)
    {
        s = 0;
        if(M < N)
        {
            i = M;
            M = N;
            N = i;
        }
        for(i = N; i <= M; i++)
        {
            printf("%d ", i);
            s += i;
        }
        printf("Sum=%d\n", s);
        scanf("%d %d", &M, &N);
    }
    
 
    return 0;
}