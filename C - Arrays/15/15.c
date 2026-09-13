#include <stdio.h>

int is_equal(int size, int vetor[])
{
  for(int i = 0; i < size; i++)
  {
    for(int j = i + 1; j < size; j++)
    {
      if(vetor[i] == vetor[j]){
        return 0;
      } 
    }
  }
  return 1;
}

int main() 
{
    int size;
    int havequals;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    havequals = is_equal(size, vetor);

    if(havequals == 1){
      printf("No identical elements were found within the scope of the vector.");
    }else{
      printf("There are at least two identical elements in your vector.");
    }

    return 0;
    
}




