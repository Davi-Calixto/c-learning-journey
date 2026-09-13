# Matrix Multiplication

## Description

The program receives the dimensions and values of two matrices and calculates their matrix product.

Matrix multiplication is only possible when the number of columns in matrix `A` is equal to the number of rows in matrix `B`.

## Solution

The `multiplicamatrizes()` function performs the multiplication using three nested `for` loops.

For each position `C[i][j]`, the function multiplies the elements from row `i` of matrix `A` by the corresponding elements from column `j` of matrix `B`, adding the results together:

```text
C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + ...
```

The variable `soma` stores the accumulated result for each position of matrix `C`.

Before performing the multiplication, the program checks whether:

```text
columns of A == rows of B
```

If this condition is not satisfied, the operation cannot be performed.

### Steps

1. The user enters the dimensions of both matrices.
2. The program checks whether multiplication is possible.
3. The values of matrices `A` and `B` are entered.
4. `multiplicamatrizes()` calculates each element of matrix `C`.
5. The resulting matrix is displayed.

## Concepts Used

* Two-dimensional arrays
* Functions
* Nested `for` loops
* Matrix multiplication
* Matrix indexing
* Input validation
* Accumulating values

## Code

```c
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
```
