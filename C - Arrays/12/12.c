#include <stdio.h>

void copyelements(int size, int vetor[], int new_vet[])
{
  for(int i = 0; i < size; i++)
  {
    new_vet[i] = vetor[i];
  }
 
}


int main() 
{
    int size;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];
    int new_vet[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    printf("Copying elements...\n|\n|\nV\n");

    copyelements(size, vetor, new_vet);
    
    for(int i = 0; i < size; i++)
    {
        printf("%d", new_vet[i]);
    }

    return 0;
}