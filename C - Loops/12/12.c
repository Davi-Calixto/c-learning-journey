#include <stdio.h>

int main() {
    int idade[7];
    float peso[7];
    int obesidade = 0;
    int soma = 0;
    float mediatotal;

    for(int i = 0; i < 7; i++)
    {
        printf("Digite o peso e idade da pessoa %d\n", i + 1);
        scanf("%f %d", &peso[i], &idade[i]);

        soma += idade[i];

        if(peso[i] >= 90)
           obesidade++;
        
    }

    mediatotal = ((float)soma / 7);

    printf("PESSOAS COM MAIS DE 90KG: %d\n", obesidade);
    printf("MEDIA TOTAL DAS IDADES %.2f\n", mediatotal);

    return 0;
}