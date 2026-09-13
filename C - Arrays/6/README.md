# Check if an Array Is Sorted

## Description

The program checks whether the elements of an array are in ascending order.

It returns `1` if the array is sorted and `0` if it is not.

## Solution

The `is_seq()` function compares each element with the next one.

A `for` loop goes through the array until the second-to-last element. If an element is greater than the next element, the sequence is not in ascending order, so the function immediately returns `0`.

If no element violates the order, the function returns `1`.

For example:

`[1, 2, 3, 4, 5]` → `1`

`[1, 3, 2, 4, 5]` → `0`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. Each element is compared with the next one.
4. If an element is greater than the next, `0` is returned.
5. If all elements are in order, `1` is returned.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Comparison operators
* Early `return`

## Code

```c
#include <stdio.h>

int is_seq(int size, int vetor[])
{
    for(int i = 0; i < size - 1; i++)
    {
        if(vetor[i] > vetor[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int size;
    int seq;

    printf("Type vetor size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    seq = is_seq(size, vetor);

    printf("%d", seq);
}
```
