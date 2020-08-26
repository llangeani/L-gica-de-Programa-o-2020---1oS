#include <stdio.h>
 
int main() {
 
    int cond = 0, cAlc = 0, cGas = 0, cDie = 0;
    
    while (cond != 4)
    {
        if (cond == 1)
            cAlc++;
        else if (cond == 2)
            cGas++;
        else if (cond == 3)
            cDie++;
        scanf("%d", &cond);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", cAlc, cGas, cDie);
    
    return 0;
}