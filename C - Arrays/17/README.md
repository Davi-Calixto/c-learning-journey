# Insert a Value into an Array

## Description

The program asks the user for an array and a value to be checked. If the value does not already exist in the array, it is added to the last position.

If the value is already present, the array remains unchanged.

## Solution

The `insert_X()` function first searches the array to see whether the value `X` already exists.

A `for` loop compares each element with `X`.

* If `X` is found, the function returns the original size.
* If `X` is not found, it is placed at `vetor[size]`, which is the first position after the current last element.
* The function then returns `size + 1`, representing the new logical size of the array.

The array is created with one extra position (`size + 1`) so there is space to insert the new value.

For example:

`[2, 5, 8]`, inserting `10` → `[2, 5, 8, 10]`

`[2, 5, 8]`, inserting `5` → `[2, 5, 8]`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The user enters the value to be checked.
4. The function searches for that value.
5. If it already exists, nothing is changed.
6. If it does not exist, it is added to the last position.
7. The resulting array is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* Searching
* Conditional statements
* Logical array size

## Code

```c
#include <stdio.h>

int insert_X(int size, int vetor[], int X)
{
    int temp = 0;

    for(int i = 0; i < size; i++)
    {
        if(vetor[i] == X)
        {
            temp = 1;
            return size;
        }
    }

    if(temp == 0)
    {
        vetor[size] = X;
        return size + 1;
    }
}

int main()
{
    int size;
    int var;
    int changesize;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size + 1];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    printf("Type a number that you'll verify: ");
    scanf("%d", &var);

    changesize = insert_X(size, vetor, var);

    if(changesize == size)
    {
        printf("The typed element already existed in the array:\n");

        for(int i = 0; i < changesize; i++)
        {
            printf("%d\n", vetor[i]);
        }
    }
    else
    {
        printf("The typed element did not exist in the array, and was added to the last position:");

        for(int i = 0; i < changesize; i++)
        {
            printf("%d\n", vetor[i]);
        }
    }
}
```
