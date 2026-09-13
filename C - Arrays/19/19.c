#include <stdio.h>
#include <stdlib.h>

void multiplicamatrizes(int linhasA, int colunasA, int matrizA[linhasA][colunasA], int linhasB, int colunasB, int matrizB[linhasB][colunasB], int matrizC[linhasA][colunasB])
{
    int soma = 0;
    for(int i = 0; i < linhasA; i++){
        for(int j = 0; j < colunasB; j++){
            
            for(int x = 0; x < linhasB; x++){
            soma += matrizA[i][x] * matrizB[x][j];

        }
        matrizC[i][j] = soma;
        soma = 0;
        }
    }
}

int main()
{
    int linhas1, colunas1;
    int linhas2, colunas2;

    printf("Digite a quantidade de linhas da Matriz A:\n"); 
    scanf("%d", &linhas1); 

    printf("\nDigite a quantidade de colunas da Matriz A:\n");
    scanf("%d", &colunas1);

    printf("\nDigite a quantidade de linhas da Matriz B:\n"); 
    scanf("%d", &linhas2); 

    printf("\nDigite a quantidade de colunas da Matriz B:\n");
    scanf("%d", &colunas2);

    if(colunas1 != linhas2){
        printf("A operacao nao pode ser realizada quando o numero de colunas da Matriz A eh diferente do numero de linhas da Matriz B!\n");
    } else{
    ////

    int matrizA[linhas1][colunas1];
    int matrizB[linhas2][colunas2];
    int matrizC[linhas1][colunas2];

    printf("\nPreencha a Matriz A:\n");
    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas1; j++){
            printf("%d, %d -> ", i, j); scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nPreencha a Matriz B:\n");
    for(int i = 0; i < linhas2; i++){
        for(int j = 0; j < colunas2; j++){
            printf("%d, %d -> ", i, j); scanf("%d", &matrizB[i][j]);
        }
    }

    ////
    printf("\nMatriz A:\n");
    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas1; j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(int i = 0; i < linhas2; i++){
        for(int j = 0; j < colunas2; j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    ////
    printf("O produto das duas matrizes:\n");
    multiplicamatrizes(linhas1, colunas1, matrizA, linhas2, colunas2, matrizB, matrizC);

    printf("O produto das duas matrizes:\n");
    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas2; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    }


    return 0;
}
