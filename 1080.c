#include <stdio.h>
 
int main() {
 
    int num, val, pos = 1, i;
    scanf("%d", &val);
    for(i = 0; i < 99; i++)
    {
        scanf("%d", &num);
        if(num > val)
        {
            val = num;
            pos = i + 2;
        }
    }
    printf("%d\n%d\n", val, pos);
    
    return 0;
}