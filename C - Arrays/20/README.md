# Replace Negative Values with Zero

## Description

The program creates an array with 10 elements, reads values entered by the user, and replaces every negative value with `0`.

## Solution

The `zera_neg()` function receives the array size and the array itself.

A `for` loop goes through all elements of the array. If an element is less than `0`, its value is replaced with `0`.

Because the array is passed to the function, the original array is modified directly.

For example:

`[5, -2, 8, -7, 3, 1, -4, 6, 9, -1]`

becomes:

`[5, 0, 8, 0, 3, 1, 0, 6, 9, 0]`

### Steps

1. An array with 10 positions is created.
2. The user enters the array values.
3. `zera_neg()` checks each element.
4. Negative values are replaced with `0`.
5. The modified array is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Modifying arrays through functions

## Code

```c
#include <stdio.h>
#include <stdlib.h>

void zera_neg(int tam, int arr[tam])
{
    for(int i = 0; i < tam; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
}

int main()
{
    int tam = 10;
    int arr[tam];

    printf("Digite os elementos do array: \n");
    for(int i = 0; i < tam; i++){
        scanf("%d ", &arr[i]);
    }

    zera_neg(tam, arr);
    for(int i = 0; i < tam; i++){
        printf("%d ", arr[i]);
    }
}

```
