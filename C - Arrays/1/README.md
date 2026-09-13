# Sum of Vector Elements

## Description

The program asks the user for the number of elements in a vector, fills the vector with user-provided values, and calculates the sum of all its elements.

## Solution

The sum is calculated by the `sum()` function, which receives the vector size and the vector itself as parameters.

Inside the function, a variable called `total` starts at `0`. A `for` loop then goes through all elements of the vector and adds each value to `total`.

At the end, the function returns the sum to `main()`, where the result is printed.

### Steps

1. The user enters the vector size.
2. The vector is created with that size.
3. The user enters the values.
4. The `sum()` function goes through the vector and adds its elements.
5. The result is returned and displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int sum(int size, int num[size])
{
    int total = 0;

    for(int i = 0; i < size; i++)
    {
        total += num[i];
    }

    return total;
}

int main()
{
    int size;

    printf("Type sum size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d value: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int total = sum(size, vetor);

    printf("\nResult for sum of all elements is: --> %d", total);
}
```
