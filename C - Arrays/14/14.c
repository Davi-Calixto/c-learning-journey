#include <stdio.h>

int second(int size, int vetor[])
{
  int bigger = vetor[0];
  int second = vetor[1];

  if(second > bigger)
  {
    int temp = bigger;
    bigger = second;
    second = temp;
  }

  for(int i = 2; i < size; i++)
    {
      if(vetor[i] > bigger)
      {
        second = bigger;
        bigger = vetor[i];
      }
      else if(vetor[i] > second && vetor[i] != bigger)
      {
        second = vetor[i];
      }
  }

  return second;
}


int main() 
{
    int size;
    int result;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    result = second(size, vetor);

    printf("The second largest value: %d", result);

    return 0;
    
}




