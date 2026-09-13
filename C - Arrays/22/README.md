# Subtract Two Arrays

## Description

The program creates two arrays with 10 integer elements, subtracts the elements of the second array from the first, and stores the results in a third array.

## Solution

The `subtrai()` function receives the size of the arrays and the three arrays.

A `for` loop goes through each position and subtracts the corresponding elements:

```text
arr3[i] = arr1[i] - arr2[i]
```

The result is stored in the third array, `arr3`.

For example:

`arr1 = [10, 20, 30]`

`arr2 = [3, 5, 10]`

Result:

`arr3 = [7, 15, 20]`

### Steps

1. The first array is filled with 10 values.
2. The second array is filled with 10 values.
3. `subtrai()` subtracts the corresponding elements.
4. The results are stored in the third array.
5. The resulting array is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Element-by-element operations
* Passing arrays to functions

## Code

```c
#include <stdio.h>
#include <stdlib.h>

void subtrai(int tam, int arr1[tam], int arr2[tam], int arr3[tam])
{
    for(int i = 0; i < tam; i++){
        arr3[i] = arr1[i] - arr2[i];
    }
}

int main()
{
    int tam = 10;
    int arr1[tam];
    int arr2[tam];
    int arr3[tam];

    printf("Preencha o ARR 1:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Preencha o ARR 2:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr2[i]);
    }

    subtrai(tam, arr1, arr2, arr3);

    printf("A subtracao dos dois ARR:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", arr3[i]);
    }
}

```
