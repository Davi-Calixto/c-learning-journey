#include <stdio.h>

int maior(int size, int vetor[])
{
    int maior = vetor[0];

    for(int i = 0; i < size; i++)
    {
       if(vetor[i] > maior)
       {
        maior = vetor[i];
       }
    }

    return maior;
}
int main() 
{
    int size;
    printf("Type vetor size:\n"); scanf("%d", &size);
    printf("-----------\n");

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-----------\n");
    }

    int bigg_num = maior(size, vetor);

    printf("The biggest num that you're typed is: --> %d", bigg_num);

    return 0;
}