# Calculate the Sums of the Main and Secondary Diagonals

## Description

The program creates an `8 × 8` matrix, fills it with values entered by the user, and calculates the sum of its main and secondary diagonals.

## Solution

The program uses two functions, one for each diagonal.

The `soma_diagprinc()` function calculates the sum of the **main diagonal**. Since the row and column have the same index on the main diagonal, the position is accessed with:

```text
m[i][i]
```

The `soma_diagsec()` function calculates the sum of the **secondary diagonal**. Its column index starts at the last column and decreases as the row increases:

```text
m[i][tam - 1 - i]
```

For an `8 × 8` matrix, the secondary diagonal goes through positions:

```text
[0][7]
[1][6]
[2][5]
...
[7][0]
```

### Steps

1. An `8 × 8` matrix is created.
2. The user fills the matrix.
3. The matrix is displayed.
4. The main diagonal is summed using `m[i][i]`.
5. The secondary diagonal is summed using `m[i][tam - 1 - i]`.
6. Both results are displayed.

## Concepts Used

* Two-dimensional arrays
* Functions
* Nested `for` loops
* Matrix indexing
* Main diagonal
* Secondary diagonal
* Accumulating values

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int soma_diagprinc(int tam, int m[tam][tam]) // soma dos elementos da diagonal principal
{
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += m[i][i];
    }
    return soma;
}

int soma_diagsec(int tam, int m[tam][tam]) // soma dos elementos da diagonal secundária
{
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += m[i][tam - 1 - i]; 
    }
    return soma;
}

int main()
{
    int tam = 8;
    int matriz[tam][tam];
    int s_diagprin;
    int s_diagsec;

    printf("Preencha a matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d, %d --> ", i, j); 
            scanf("%d", &matriz[i][j]);     
        }
    }
    
    printf("Matriz original:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);     
        }
        printf("\n");
    }
    s_diagprin = soma_diagprinc(tam, matriz);
    s_diagsec = soma_diagsec(tam, matriz);

    printf("Soma da diagonal principal: %d\n", s_diagprin);
    printf("Soma da diagonal secundária: %d\n", s_diagsec);
}

```
