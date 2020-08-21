#include <stdio.h>
#include <math.h>
 
int main() {
 
    double i, j;
    for(i = 0; i <= 2.1; i += 0.2)
        for(j = i+1; j <= 3.1+i; j++)
        {
            if(fmod(i,1) == 0 || i > 1.9)
            printf("I=%.0f J=%.0f\n", i, j);
            else
            printf("I=%.1f J=%.1f\n", i, j);
        }
 
    return 0;
}