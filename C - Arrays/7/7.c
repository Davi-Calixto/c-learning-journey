#include <stdio.h>

void is_negative(int size, int vetor[])
{

  for(int i = 0; i < size; i++)
  {
    if(vetor[i] < 0)
    {
        vetor [i] = 0;
    }
  }
}

int main() 
{
    int size;
    printf("Type vetor size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    is_negative(size, vetor);

    printf("The sequence with negative numbers replaced to zero is:\n");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", vetor[i]);
    }
}