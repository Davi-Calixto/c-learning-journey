#include <stdio.h>
#include <stdlib.h>

void seven(int tam, int arr[tam])
{
    int i = 0; int num = 0;
    
    while(i < 100){
        if(num % 7 != 0 && num % 10 != 7){
            arr[i] = num;
            i++;
        }
        num++;
    }
}

int main()
{
    int tam = 100;
    int arr[tam];

    seven(tam, arr);

    for(int i = 0; i < tam; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}
