# Sum a Range of Array Elements

## Description

The program asks the user for the size of an array and its values, then calculates the sum of the elements between two specified indices.

## Solution

The `func_sum()` function receives the array, its size, and the starting and ending indices.

A `for` loop starts at `start` and continues until `end`. Each element in this range is added to the `total` variable.

Before calling the function, the program checks whether the indices are valid. The calculation is only performed if `start` and `end` are within the array boundaries and `start` is not greater than `end`.

For example, given:

`[10, 20, 30, 40, 50]`

With `start = 1` and `end = 3`:

`20 + 30 + 40 = 90`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The user chooses the starting and ending indices.
4. The program validates the indices.
5. `func_sum()` adds all elements within the selected range.
6. The result is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Array indexing
* Input validation
* Conditional statements
* Accumulating values

## Code

```c
#include <stdio.h>

int func_sum(int size, int vetor[], int start, int end)
{
    int total = 0;

    for(int i = start; i <= end; i++)
    {
        total += vetor[i];
    }

    return total;
}

int main()
{
    int size;
    int start;
    int end;
    int sum;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    printf("Start index (0 to %d): ", size - 1);
    scanf("%d", &start);

    printf("-------------\n");

    printf("End index (%d to %d): ", start, size - 1);
    scanf("%d", &end);

    if (start < 0 || end >= size || start > end)
    {
        printf("Error: Invalid indices!\n");
    }
    else
    {
        sum = func_sum(size, vetor, start, e_
```
