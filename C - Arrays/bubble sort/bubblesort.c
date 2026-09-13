#include <stdio.h>

void bubble_sort(int vetor[], int size)
{
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int size;
    printf("Type vector size: "); scanf("%d", &size); 

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    bubble_sort(vetor, size);

    printf("Ordened vector:\n");

    for(int i = 0; i < size; i++){
        printf("%d ", vetor[i]);
    }

}




