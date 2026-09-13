#include <stdio.h>
#include <stdlib.h>

void identidade(int tam, int arr[tam][tam])
{
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(j == i){
                arr[i][j] = 1;
            } else{
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int tam = 5; // provavelmente funciona pra tamanhos até 300-500 -> acima disso o risco de overflow é alto
    int matriz[tam][tam];
    identidade(tam, matriz);

    printf("Matriz Quadrada:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
