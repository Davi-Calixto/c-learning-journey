#include <stdio.h>
#include <stdlib.h>

int retirar_repetidos(int tam, int v[tam])
{
    int i, j, k;
    for(int i = 0; i < tam; i++){
        for(j = i + 1; j < tam; j++){ // coloca j uma posição a mais que i para realizar a verificação
            if(v[i] == v[j]){
                for(k = j; k < tam - 1; k++){ // algoritmo de ordenação
                    v[k] = v[k + 1];
                }
                tam--;
                j--;
            }
        }
    }
    return tam;
}

int main()
{
    int tam = 30;
    int vetor[tam];

    printf("preencha o vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }  
    int tam2 = retirar_repetidos(tam, vetor);
    for(int i = 0; i < tam2; i++){
        printf("%d ", vetor[i]);
    }
}
