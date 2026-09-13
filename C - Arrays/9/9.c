#include <stdio.h>

float avg_arith(int vetor[], int size)
{
  int total = 0;
  float avg = 0;

  for(int i = 0; i < size; i++)
    {
      total += vetor[i];
  }

  avg = (float)total / size;

  return avg;
}


int main() 
{
    int size;
    float avg;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    avg = avg_arith(vetor, size);

    printf("The arithmetic average is --> %.2f", avg);

    return 0;
    
}