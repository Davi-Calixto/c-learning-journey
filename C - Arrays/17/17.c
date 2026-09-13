#include <stdio.h>

int insert_X(int size, int vetor[], int X)
{
  int temp = 0;

  for(int i = 0; i < size; i++)
  {
    if(vetor[i] == X){
      temp = 1;
      return size;
    }
  }

  if(temp == 0){
    vetor[size] = X;
    return size + 1;
  }
}

int main() 
{
    int size;
    int var;
    int changesize;

    printf("Type vector size: "); scanf("%d", &size); 

    int vetor[size + 1];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    printf("Type a number that you'll verify: "); scanf("%d", &var);
    
    changesize = insert_X(size, vetor, var);

    if(changesize == size){
      printf("The typed element already existed in the array:\n");
      for(int i = 0; i < changesize; i++){
        printf("%d\n", vetor[i]);
      }
    } else{
      printf("The typed element did not exist in the array, and was added to the last position:");
      for(int i = 0; i < changesize; i++){
        printf("%d\n",vetor[i]);
      }
    } 
}




