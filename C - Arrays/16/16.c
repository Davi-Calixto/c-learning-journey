#include <stdio.h>

int verifypairs(int size, int vetor[], int pairs[], int odd[])
{
  int i = 0;
  int temp_pairs = 0;
  int temp_odd = 0;
  while(i < size)
  {
    if((vetor[i] % 2) == 0)
    {
      pairs[temp_pairs] = vetor[i];
      temp_pairs++;
    } 
    else
    {
      odd[temp_odd] = vetor[i];
      temp_odd++;
    }
    i++;
  }

  return temp_pairs;
}

int main() 
{
    int size;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];
    int pairs[size];
    int odd[size];
    int temp;

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    temp = verifypairs(size, vetor, pairs, odd);

    printf("PAIRS:\n");

    for(int i = 0; i < temp; i++)
    {
      printf("%d\n", pairs[i]);
    }

    printf("---------------\n");
    printf("ODD:\n");

    for(int i = 0; i < (size - temp); i++)
    {
      printf("%d", odd[i]);
    }

    return 0;
    
}




