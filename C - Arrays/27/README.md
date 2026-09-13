# Sum Elements Above and Below the Main Diagonal

## Description

The program creates a `3 × 3` matrix, fills it with values entered by the user, and calculates the sum of the elements above and below the main diagonal.

## Solution

The matrix is filled using two nested `for` loops, where `i` represents the row and `j` represents the column.

The main diagonal is identified by the condition:

```text
i == j
```

To find the elements **above** the main diagonal, only positions where:

```text
j > i
```

should be considered.

To find the elements **below** the main diagonal, only positions where:

```text
i > j
```

should be considered.

The program then stores both sums and displays them.

For example:

```text
1  2  3
4  5  6
7  8  9
```

Above the main diagonal:

`2 + 3 + 6 = 11`

Below the main diagonal:

`4 + 7 + 8 = 19`

### Steps

1. A `3 × 3` matrix is created.
2. The user enters all matrix values.
3. The matrix is displayed.
4. The elements above the main diagonal are summed.
5. The elements below the main diagonal are summed.
6. Both results are displayed.

## Concepts Used

* Two-dimensional arrays
* Nested `for` loops
* Matrix indexing
* Main diagonal
* Conditional expressions
* Function calls
* Accumulating values

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 3; 
    int matriz[tam][tam];
    int soma_acima;
    int soma_abaixo;

    printf("Preencha a Matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d, %d: ", i, j); scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz preenchida:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    soma_acima = soma_acima_diag_prin(tam, matriz);
    printf("A soma dos elementos acima da diagonal principal: %d", soma_acima);

    soma_abaixo = soma_abaixo_diag_prin(tam, matriz);
    printf("\nA soma dos elementos abaixo da diagonal principal: %d", soma_abaixo);
}

```
