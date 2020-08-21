#include <stdio.h>
 
int main() {
 
    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b)
    i = (a+b+(b-a))/2;
    else
    i = (a+b+(a-b))/2;
    if(i < c)
    printf("%d eh o maior\n", c);
    else
    printf("%d eh o maior\n", i);

    return 0;
}