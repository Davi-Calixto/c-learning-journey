# Find the Index of the Largest Element

## Description

The program asks the user for the size of an array, stores the values entered, and finds the position (index) of the largest element.

## Solution

The `bigger_el()` function receives the array and its size.

It starts by assuming that the first element is the largest. The variable `element` stores the index of the largest value found so far.

A `for` loop starts at index `1` and compares each element with `bigger`. Whenever a larger value is found, both `bigger` and `element` are updated.

At the end, the function returns the index of the largest element.

For example:

`[10, 25, 7, 40, 18]` → largest element: `40` → index: `3`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The first element is used as the initial largest value.
4. Each remaining element is compared with the current largest value.
5. When a larger value is found, its index is stored.
6. The index of the largest element is returned and displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* Conditional statements
* Tracking an element's index

## Code

```c 
#include <stdio.h>

int bigger_el(int size, int vetor[])
{
    int bigger = vetor[0];
    int element = 0;

    for(int i = 1; i < size; i++)
    {
        if(vetor[i] > bigger)
        {
            bigger = vetor[i];
            element = i;
        }
    }

    return element;
}

int main()
{
    int size;
    int isbigger;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    isbigger = bigger_el(size, vetor);

    printf("The biggest digit is in position: %d", isbigger);

    return 0;
}
```
