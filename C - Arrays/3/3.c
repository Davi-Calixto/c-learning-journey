#include <stdio.h>

int pairs(int size, int vetor[])
{
    int pair_num = 0;

    for(int i = 0; i < size; i++)
    {
        if((vetor[i] % 2) == 0)
        {
            pair_num++;
        }
    }

    return pair_num;
}

int main() 
{
    int size;
    printf("Type vetor size: "); scanf("%d", &size);
    printf("\n-----------\n");

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number: ", i + 1); scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    int pair = pairs(size, vetor);

    printf("In the sequence that you typed, we have a %d pairs numbers! :)", pair);

    return 0;
}