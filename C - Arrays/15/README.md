# Check for Duplicate Elements

## Description

The program asks the user for the size of an array, stores the values entered, and checks whether any elements are repeated.

It returns `1` if all elements are different and `0` if at least two elements are equal.

## Solution

The `is_equal()` function compares each element with all elements that come after it.

The outer `for` loop selects an element, while the inner `for` loop compares it with the remaining elements.

If two elements are equal, the function immediately returns `0`.

If all comparisons are completed without finding equal values, the function returns `1`.

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. Each element is compared with the elements that come after it.
4. If two equal elements are found, `0` is returned.
5. If no duplicates are found, `1` is returned.
6. The result is displayed.

## Concepts Used

* Functions
* Arrays
* Nested `for` loops
* Conditional statements
* Array indexing
* Early `return`

## Code

```c
#include <stdio.h>

int is_equal(int size, int vetor[])
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(vetor[i] == vetor[j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int size;
    int havequals;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    havequals = is_equal(size, vetor);

    if(havequals == 1)
    {
        printf("No identical elements were found within the scope of the vector.");
    }
    else
    {
        printf("There are at least two identical elements in your vector.");
    }

    return 0;
}
```
