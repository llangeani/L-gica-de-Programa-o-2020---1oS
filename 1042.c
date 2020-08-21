#include <stdio.h>

int main()
{
    
    int a, b, c, ai, bi, ci, temp, i;
    
    scanf("%d %d %d", &ai, &bi, &ci);
    a = ai;
    b = bi;
    c = ci;
    for(i = 0; i < 2; i++)
    {
        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if(b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n%d\n%d\n%d\n", ai, bi, ci);
    
    return 0;
}