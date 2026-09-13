#include <stdio.h>

int remove_equals(int size, int vetor[], int x)
{
  int j = 0;

  for(int i = 0; i < size; i++)
  {
    if(vetor[i] != x)
    {
        vetor[j] = vetor[i];
        j++;

    }
  }

  return j;
    
}


int main() 
{
    int size;
    int x;
    int newsize;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    printf("Which number do you want to remove from the vector?: "); scanf("%d", &x);

    newsize = remove_equals(size, vetor, x);
    
    for(int i = 0; i < newsize; i++)
    {
        printf("%d --> %d", i + 1, vetor[i]);
    }

    return 0;
}