#include <stdio.h>
#include <stdlib.h>

int verificar(int v1[5][2], int v2[10][5], int v3[10 * 5])
{
    int tam = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 10; k++){
                for(int l = 0; l < 5; l++){
                    if(v1[i][j] == v2[k][l]){
                        v3[tam] = v1[i][j];
                        tam++;
                    }
                }
            }
        }
    }

    return tam;
}

int main()
{
    int A[5][2] = {
        {1, 2,},
        {3, 4},
        {5, 6},
        {7, 8},
        {9, 10}
    };

    int B[10][5] = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {2, 4, 6, 8, 10},
        {5, 10, 15, 20, 25},
        {90, 91, 92, 93, 94},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {12, 14, 16, 18, 20},
        {11, 22, 33, 44, 55},
        {13, 23, 33, 43, 53}
    };

    int C[10 * 5];
    int tam = verificar(A, B, C);

    printf("Elementos comuns:\n");
    for(int i = 0; i < tam; i++){
            printf("%d ", C[i]);
        }



}
