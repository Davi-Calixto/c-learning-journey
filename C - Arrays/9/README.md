# Calculate the Arithmetic Mean

## Description

The program asks the user for the size of an array, stores the values entered, and calculates their arithmetic mean.

## Solution

The `avg_arith()` function receives the array and its size.

A `for` loop goes through all elements and adds their values to `total`. After that, the total sum is divided by the number of elements.

The result is converted to `float` before the division so that the program can return a decimal value instead of an integer.

For example:

`[10, 20, 30]` → `(10 + 20 + 30) / 3 = 20.00`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. All elements are added together.
4. The sum is divided by the number of elements.
5. The arithmetic mean is displayed with two decimal places.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Type casting
* Floating-point arithmetic
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

float avg_arith(int vetor[], int size)
{
    int total = 0;
    float avg = 0;

    for(int i = 0; i < size; i++)
    {
        total += vetor[i];
    }

    avg = (float)total / size;

    return avg;
}

int main()
{
    int size;
    float avg;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    avg = avg_arith(vetor, size);

    printf("The arithmetic average is --> %.2f", avg);

    return 0;
}
```
