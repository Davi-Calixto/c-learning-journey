#include <stdio.h>
#include <stdlib.h>

void subtrai(int tam, int arr1[tam], int arr2[tam], int arr3[tam])
{
    for(int i = 0; i < tam; i++){
        arr3[i] = arr1[i] - arr2[i];
    }
}

int main()
{
    int tam = 10;
    int arr1[tam];
    int arr2[tam];
    int arr3[tam];

    printf("Preencha o ARR 1:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Preencha o ARR 2:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr2[i]);
    }

    subtrai(tam, arr1, arr2, arr3);

    printf("A subtracao dos dois ARR:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", arr3[i]);
    }
}
