#include <stdio.h>

int sum(int size, int num[size])
{
  int total = 0;
  for(int i = 0; i < size; i++)
  {
    total += num[i];
  }

  return total;
}

int main() 
{
    int size;

    printf("Type sum size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d value: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int total = sum(size, vetor);

    printf("\n Result for sum of all elements is: --> %d", total);
    
}