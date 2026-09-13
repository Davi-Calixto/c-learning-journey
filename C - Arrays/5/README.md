# Invert an Array

## Description

The program asks the user for the size of an array, stores the values entered, and reverses the order of its elements.

## Solution

The `invert()` function reverses the array by swapping elements from opposite ends.

A `for` loop only needs to run through half of the array. In each iteration, the current element is swapped with its corresponding element at the opposite position.

The variable `temp` is used to temporarily store a value during the swap.

For example:

`[1, 2, 3, 4, 5]` → `[5, 4, 3, 2, 1]`

The expression `size - i - 1` is used to access the corresponding position from the end of the array.

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The `invert()` function starts from the beginning of the array.
4. Each element is swapped with the corresponding element from the end.
5. The loop stops after reaching the middle of the array.
6. The inverted array is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Temporary variables
* Array indexing
* Swapping values

## Code

```c
#include <stdio.h>

void invert(int size, int vetor[])
{
    int temp = 0;

    for(int i = 0; i < (size / 2); i++)
    {
        temp = vetor[i];
        vetor[i] = vetor[size - i - 1];
        vetor[size - i - 1] = temp;
    }
}

int main()
{
    int size;

    printf("Type vetor size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    invert(size, vetor);

    printf("Inverted: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", vetor[i]);
    }
}
```
