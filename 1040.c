#include <stdio.h>
 
int main() {
 
    float N1, N2, N3, N4, M, E;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    M = (N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1f\n", M);
    if(M >= 7)
    printf("Aluno aprovado.\n");
    else if(M >= 5)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &E);
        printf("Nota do exame: %.1f\n", E);
        if((M+E)/2 >= 5)
         printf("Aluno aprovado.\n");
        else
         printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (M+E)/2);
    }
    else
    printf("Aluno reprovado.\n");
 
    return 0;
}