# Remove All Occurrences of a Value

## Description

The program asks the user for the size of an array, stores the values entered, and removes all occurrences of a specific value from the array.

## Solution

The `remove_equals()` function receives the array, its size, and the value that should be removed.

The variable `j` represents the position where the next valid element will be placed.

A `for` loop checks every element of the array. If the current value is different from `x`, it is copied to position `j`, and `j` is increased.

This moves all elements that should remain to the beginning of the array, effectively removing the occurrences of `x` without creating another array.

The function returns `j`, which becomes the new logical size of the array.

For example:

`[2, 5, 2, 8, 2, 10]`, removing `2` → `[5, 8, 10]`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The user chooses the value to remove.
4. The function checks each element.
5. Values different from `x` are moved to the beginning of the array.
6. The new size is returned.
7. Only the remaining elements are displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* In-place modification
* Logical array size

## Code

```c
#include <stdio.h>

int remove_equals(int size, int vetor[], int x)
{
    int j = 0;

    for(int i = 0; i < size; i++)
    {
        if(vetor[i] != x)
        {
            vetor[j] = vetor[i];
            j++;
        }
    }

    return j;
}

int main()
{
    int size;
    int x;
    int newsize;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    printf("Which number do you want to remove from the vector?: ");
    scanf("%d", &x);

    newsize = remove_equals(size, vetor, x);

    for(int i = 0; i < newsize; i++)
    {
        printf("%d --> %d", i + 1, vetor[i]);
    }

    return 0;
}
```
