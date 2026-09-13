#include <stdio.h>

void invert(int size, int vetor[])
{
  int temp = 0;
  for(int i = 0; i < (size / 2); i++) 
  {
    temp = vetor[i];
    vetor[i] = vetor[size - i - 1];
    vetor[size - i - 1] = temp;
  } 
}

int main() 
{
    int size;
    printf("Type vetor size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    invert(size, vetor);

    printf("Inverted: ");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", vetor[i]);
    }


}