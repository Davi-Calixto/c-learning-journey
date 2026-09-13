# Copy Elements from One Array to Another

## Description

The program asks the user for the size of an array, stores the values entered, and copies all elements into a second array.

## Solution

The `copyelements()` function receives the original array, the new array, and the array size.

A `for` loop goes through every element of the original array and assigns it to the corresponding position in the new array.

This creates a separate array containing the same values as the original one.

For example:

`[1, 2, 3, 4]` → `[1, 2, 3, 4]`

### Steps

1. The user enters the array size.
2. The program stores the values in the original array.
3. A second array with the same size is created.
4. `copyelements()` copies each element to the new array.
5. The copied elements are displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* Copying values between arrays

## Code

```c id="v5q8na"
#include <stdio.h>

void copyelements(int size, int vetor[], int new_vet[])
{
    for(int i = 0; i < size; i++)
    {
        new_vet[i] = vetor[i];
    }
}

int main()
{
    int size;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];
    int new_vet[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    printf("Copying elements...\n|\n|\nV\n");

    copyelements(size, vetor, new_vet);

    for(int i = 0; i < size; i++)
    {
        printf("%d", new_vet[i]);
    }

    return 0;
}
```
