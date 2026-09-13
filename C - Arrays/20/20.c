#include <stdio.h>
#include <stdlib.h>

void zera_neg(int tam, int arr[tam])
{
    for(int i = 0; i < tam; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
}

int main()
{
    int tam = 10;
    int arr[tam];

    printf("Digite os elementos do array: \n");
    for(int i = 0; i < tam; i++){
        scanf("%d ", &arr[i]);
    }

    zera_neg(tam, arr);
    for(int i = 0; i < tam; i++){
        printf("%d ", arr[i]);
    }
}
