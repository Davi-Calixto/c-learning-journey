# Replace Negative Numbers with Zero

## Description

The program asks the user for the size of an array, stores the values entered, and replaces every negative number with `0`.

## Solution

The `is_negative()` function goes through every element of the array using a `for` loop.

For each element, it checks whether the value is less than `0`. If it is, that position in the array is changed to `0`.

The function modifies the original array, so the changes are kept after the function finishes.

For example:

`[5, -2, 8, -7, 3]` → `[5, 0, 8, 0, 3]`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. Each element is checked to see if it is negative.
4. Negative values are replaced with `0`.
5. The modified array is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Modifying array elements

## Code

```c id="q8x7vz"
#include <stdio.h>

void is_negative(int size, int vetor[])
{
    for(int i = 0; i < size; i++)
    {
        if(vetor[i] < 0)
        {
            vetor[i] = 0;
        }
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

    is_negative(size, vetor);

    printf("The sequence with negative numbers replaced to zero is:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", vetor[i]);
    }
}
```
