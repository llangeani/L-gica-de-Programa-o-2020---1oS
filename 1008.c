#include <stdio.h>
 
int main() {

    int N, t;
    float S;
    scanf("%d", &N);
    scanf("%d", &t);
    scanf("%f", &S);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", N, t * S);
 
    return 0;
}