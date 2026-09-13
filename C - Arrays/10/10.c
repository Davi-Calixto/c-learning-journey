#include <stdio.h>

int bigger_el(int size, int vetor[])
{
  int bigger = vetor[0];
  int element = 0;

  for(int i = 1; i < size; i++)
    {
      if(vetor[i] > bigger)
      {
        bigger = vetor[i];
        element = i;
      }
  }

  return element;
}


int main() 
{
    int size;
    int isbigger;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    isbigger = bigger_el(size, vetor);

    printf("The biggest digit is in position: %d", isbigger);


    return 0;
    
}