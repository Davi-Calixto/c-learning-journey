#include <stdio.h>

int func_sum(int size, int vetor[], int start, int end)
{
  int total = 0;

  for(int i = start; i <= end; i++)
    {
      total += vetor[i];
  }
  return total;
}


int main() 
{
    int size;
    int start;
    int end;
    int sum;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    printf("Start index (0 to %d): ", size - 1); scanf("%d", &start);
    printf("-------------\n");
    printf("End index (%d to %d): ", start, size - 1); scanf("%d", &end);

    if (start < 0 || end >= size || start > end) {
        printf("Error: Invalid indices!\n");
    } else {
        sum = func_sum(size, vetor, start, end);
        printf("Sum = %d\n", sum);
    }

    return 0;
    
}