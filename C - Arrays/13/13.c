#include <stdio.h>

int biggerthanavg(int size, int vetor[], float avg)
{
  int j = 0;
  for(int i = 0; i < size; i++)
  {
    if(vetor[i] > avg)
    {
        j++;
    }
  }
 
  return j;
}


int main() 
{
    int size;
    int j = 0;
    float avg = 0;
    int bigger_than_avg;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        j += vetor[i];
        printf("\n-------------\n");
    }

    avg = (float)j / size;
    bigger_than_avg = biggerthanavg(size, vetor, avg);

    printf("%d elements were found that are larger than the media.", bigger_than_avg);
    

    return 0;
}