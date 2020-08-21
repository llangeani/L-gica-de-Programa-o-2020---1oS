#include <stdio.h>
 
int main() {
 
    int N, i;
    float s, v1, v2, v3;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%f %f %f", &v1, &v2, &v3);
        s = (v1*2 + v2*3 + v3*5)/10;
        printf("%.1f\n", s);
    }
    
    return 0;
}