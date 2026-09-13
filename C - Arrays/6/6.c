#include <stdio.h>

int is_seq(int size, int vetor[])
{

  for(int i = 0; i < size - 1; i++)
  {
    if(vetor[i] > vetor[i + 1])
    {
        return 0;
    }
  }
  return 1;
}

int main() 
{
    int size;
    int seq;
    printf("Type vetor size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    seq = is_seq(size, vetor);

    printf("%d", seq);
}