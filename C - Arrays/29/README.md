# Remove Duplicate Elements

## Description

The program receives an array with 30 elements and removes all repeated values, keeping only the first occurrence of each value.

The array is modified directly, without creating another array.

## Solution

The `retirar_repetidos()` function compares each element with the elements that come after it.

The outer loop selects the current element, while the inner loop searches for equal values.

When a duplicate is found, a third loop shifts all elements after it one position to the left. The logical size of the array is then decreased by `1`.

The `j--` is used because, after shifting the elements, a new value takes the position that was just checked. Decreasing `j` makes the loop check that position again.

For example:

`[1, 2, 3, 2, 4]` → `[1, 2, 3, 4]`

### Steps

1. The program creates an array with 30 elements.
2. The user fills the array.
3. Each element is compared with the elements after it.
4. When a duplicate is found, the following elements are shifted one position to the left.
5. The logical size is decreased.
6. The process continues until all duplicates are removed.
7. The resulting array is displayed.

## Concepts Used

* Functions
* Arrays
* Nested `for` loops
* Array indexing
* Removing elements by shifting
* Logical array size
* In-place modification

## Code

```c
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

```
