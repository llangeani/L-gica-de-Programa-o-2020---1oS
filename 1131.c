#include <stdio.h>
 
int main() 
{
    int cond = 1, Int = 0, Gre = 0, Emp = 0, Jogos = 0;
    
    while (cond != 2)
    {
        int golInt = 0, golGre = 0;
        
        if (cond == 1)
        {
            scanf("%d %d", &golInt, &golGre);
            if (golInt > golGre)
                Int++;
            else if (golGre > golInt)
                Gre++;
            else
                Emp++;
            Jogos++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &cond);
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", Jogos, Int, Gre, Emp);
    if(Int > Gre)
        printf("Inter venceu mais\n");
    else if(Gre > Int)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
 
    return 0;
}