#include <stdio.h>
 
int main() {
 
    int i, cont = 0;
    float n, s = 0;
    for(i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if(n > 0)
        {
            s += n;
            cont++;
        }
    }
    printf("%d valores positivos\n%.1f\n", cont, s/cont);
 
    return 0;
}