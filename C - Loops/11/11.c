#include <stdio.h>

int main() {
    int idade[15];
    int faixa1 = 0; int faixa2 = 0;

    for(int i = 0; i<15; i++)
    {
      printf("Digite a idade da pessoa %d\n", i + 1);
      scanf("%d", &idade[i]);
    }

    for(int i = 0; i < 15; i++)
    {
        if(idade[i] <= 15)
           faixa1++;
        else if(idade[i] >= 61)
           faixa2++;
    } 
    
    float perc1 = (faixa1 / 15.0) * 100;
    float perc2 = (faixa2 / 15.0) * 100;

    printf("PESSOAS ATE 15 ANOS: %.2f%%\n", perc1);
    printf("PESSOAS ACIMA DE 61 ANOS: %.2f%%\n", perc2);

    return 0;
}