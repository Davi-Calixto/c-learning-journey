#include <stdio.h>
#include <stdlib.h>

int delzero(int tam, int x[tam])
{
    int i, j, contador = 0;
    for(i = 0; i < tam; i++){
        if(x[i] != 0){
            x[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int main()
{
    int tam = 15;
    int arr[tam];

    printf("PREENCHA O ARR:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    int conta = delzero(tam, arr);

    printf("\nSEM OS ZEROS:\n");
    for(int i = 0; i < conta; i++){
        printf("%d ", arr[i]);
    }

}
