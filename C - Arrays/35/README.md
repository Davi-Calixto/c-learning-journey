# Find Common Elements Between Two Matrices

## Description

The program compares two matrices and finds the elements that appear in both.

The first matrix has `5 × 2` elements, while the second has `10 × 5` elements. The common values are stored in a third array.

## Solution

The `verificar()` function uses four nested `for` loops to compare every element of matrix `A` with every element of matrix `B`.

When a value from `A` is equal to a value from `B`, it is stored in the array `v3`. The variable `tam` keeps track of how many matching elements have been found.

After all comparisons are finished, the function returns the number of elements stored in `v3`.

### Steps

1. Two matrices with different dimensions are created.
2. The program goes through every element of matrix `A`.
3. Each element of `A` is compared with every element of matrix `B`.
4. When equal values are found, they are added to `v3`.
5. The number of matches is returned.
6. The common elements are displayed.

### Important Detail

This implementation stores a value **every time a match is found**. Therefore, if the same value appears multiple times in `B`, it will also be added multiple times to `C`.

For example, since `1` appears five times in matrix `B`, the value `1` is added to the result five times.

## Concepts Used

* Two-dimensional arrays
* Functions
* Nested `for` loops
* Matrix indexing
* Array comparison
* Storing results in a third array
* Counters

## Code

```c 
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

```
