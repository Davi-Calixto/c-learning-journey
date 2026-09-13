# Fill an Array with a Mathematical Formula

## Description

The program creates an array with 50 floating-point elements and fills it using a mathematical formula.

## Solution

The `preenche()` function receives the array size and the array itself.

A `for` loop goes through all positions of the array. For each position, the program calculates a value using the formula:

```text
(i + 5i) / (i + 1)
```

The result is stored directly in the corresponding position of the array.

Since the array uses `float`, the program can store decimal values. The values are displayed with two decimal places using `%.2f`.

### Steps

1. An array with 50 `float` elements is created.
2. `preenche()` iterates through all positions.
3. The formula is calculated for each index.
4. The result is stored in the array.
5. All values are displayed with two decimal places.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Floating-point variables
* Mathematical expressions
* Formatted output with `printf()`

## Code

```c
#include <stdio.h>
#include <stdlib.h>

void preenche(int tam, float arr[tam])
{
    for(int i = 0; i < tam; i++){
        arr[i] = (i + 5.0 * i) / (i + 1);
    }
}

int main()
{
    int tam = 50;
    float arr[tam];

    preenche(tam, arr);
    for(int i = 0; i < tam; i++){
        printf("%.2f ", arr[i]);
    }
}
```
