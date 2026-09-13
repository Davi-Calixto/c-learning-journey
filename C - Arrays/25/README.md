# Remove Zeros from an Array

## Description

The program creates an array with 15 integers, reads the values entered by the user, and removes all `0` values from the sequence.

The remaining elements are moved to the beginning of the same array.

## Solution

The `delzero()` function goes through every element of the array and checks whether it is different from `0`.

The variable `contador` keeps track of the position where the next non-zero value should be placed.

When a non-zero element is found, it is copied to `x[contador]`, and `contador` is increased.

The function returns `contador`, which represents the new logical size of the array.

This means that no second array is needed.

For example:

`[4, 0, 7, 0, 2, 5]` → `[4, 7, 2, 5]`

### Steps

1. The program creates an array with 15 elements.
2. The user enters the values.
3. `delzero()` checks each element.
4. Non-zero values are moved to the beginning of the array.
5. The function returns the new logical size.
6. Only the remaining elements are displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* In-place modification
* Logical array size
* Filtering elements

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int delzero(int tam, int x[tam])
{
    int i, j, contador = 0;
    for(i = 0; i < tam; i++){
        if(x[i] != 0){
            x[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int main()
{
    int tam = 15;
    int arr[tam];

    printf("PREENCHA O ARR:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    int conta = delzero(tam, arr);

    printf("\nSEM OS ZEROS:\n");
    for(int i = 0; i < conta; i++){
        printf("%d ", arr[i]);
    }

}
```
