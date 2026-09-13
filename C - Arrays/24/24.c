#include <stdio.h>
#include <stdlib.h>

int diferenca(int tam, int x[tam], int y[tam], int z[tam]) 
{
    int i, j, achou = 1, contador = 0;
    for(i = 0; i < tam; i++){
        achou = 1;
        for(j = 0; j < tam; j++){
            if(y[j] == x[i]){
                achou = 0;
            }
        }
        if(achou == 1){
            z[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int intersec(int tam, int x[tam], int y[tam], int z[tam])
{
    int i, j, achou = 1, contador = 0;
    for(i = 0; i < tam; i++){
        achou = 1;
        for(j = 0; j < tam; j++){
            if(y[j] == x[i]){
                achou = 0;
            }
        }
        if(achou == 0){
            z[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int uniao(int tam, int x[tam], int y[tam], int z[tam * 2])
{
    int i, j, achou = 0, contador = 0;
    for(i = 0; i < tam; i++){
        z[i] = x[i];
    }

    for(i = 0; i < tam; i++){
        achou = 1;  // reseta toda vez antes do loop para evitar ambiguidades
        for(j = 0; j < tam; j++){
            if(x[j] == y[i]){
                achou = 0;
            }
        }
        if(achou == 1){
            z[tam + contador] = y[i]; // tam + 0, tam + 1, tam + 2 até --> tam * 2
            contador++;
        }
    }

    return tam + contador;
}

void soma(int tam, int x[tam], int y[tam], int z[tam])
{
    for(int i = 0; i < tam; i++){
        z[i] = x[i] + y[i];
    }
}

void produto(int tam, int x[tam], int y[tam], int z[tam])
{
    for(int i = 0; i < tam; i++){
        z[i] = x[i] * y[i];
    }
}

int main()
{
    int tam = 10;
    int arr[tam];
    int arr2[tam];

    int sum[tam];
    int multi[tam];
    int intersect[tam];
    int dif[tam];
    int unir[tam * 2];
    int c1, c2, c3;

    printf("PREENCHA V1:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    printf("PREENCHA V2:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr2[i]);
    }

    soma(tam, arr, arr2, sum);
    printf("A soma dos elementos de V1 + V2:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", sum[i]);
    }

    produto(tam, arr, arr2, multi);
    printf("O produto de todos os elementos de V1 * V2:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", multi[i]);
    }

    c1 = intersec(tam, arr, arr2, intersect);
    printf("\nA interseccao de V1 e V2:\n");
    for(int i = 0; i < c1; i++){
        printf("%d ", intersect[i]);
    }

    c2 = uniao(tam, arr, arr2, unir);
    printf("\nA unicao de V1 e V2:\n");
    for(int i = 0; i < c2; i++){
        printf("%d ", unir[i]);
    }

    c3 = diferenca(tam, arr, arr2, dif);
    printf("\nA diferenca entre V1 e V2:\n");
    for(int i = 0; i < c3; i++){
        printf("%d ", dif[i]);
    }

}
