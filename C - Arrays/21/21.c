#include <stdio.h>
#include <stdlib.h>

void preenche(int tam, float arr[tam])
{
    for(int i = 0; i < tam; i++){
        arr[i] = (i + 5.0 * i) / (i + 1);
    }
}

int main()
{
    int tam = 50;
    float arr[tam];

    preenche(tam, arr);
    for(int i = 0; i < tam; i++){
        printf("%.2f ", arr[i]);
    }
}
