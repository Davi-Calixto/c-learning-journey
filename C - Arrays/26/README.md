# Create an Identity Matrix

## Description

The program creates a square matrix of size `5 × 5` and fills it as an **identity matrix**.

An identity matrix has `1`s on the main diagonal and `0`s in all other positions.

Example:

```text
1 0 0
0 1 0
0 0 1
```

## Solution

The `identidade()` function receives the matrix size and the matrix itself.

Two nested `for` loops are used to access every position of the matrix.

The condition `j == i` identifies the main diagonal:

* If `i` and `j` are equal, the position receives `1`.
* Otherwise, the position receives `0`.

The matrix is modified directly inside the function.

### Steps

1. A square `5 × 5` matrix is created.
2. `identidade()` iterates through every matrix position.
3. Positions on the main diagonal receive `1`.
4. All other positions receive `0`.
5. The resulting identity matrix is displayed.

## Concepts Used

* Functions
* Two-dimensional arrays
* Nested `for` loops
* Matrix indexing
* Conditional statements
* Main diagonal

## Code

```c
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
```
