# Separate Even and Odd Numbers

## Description

The program asks the user for the size of an array, stores the values entered, and separates the numbers into two different arrays: one for even numbers and another for odd numbers.

## Solution

The `verifypairs()` function goes through every element of the original array and checks whether the number is even or odd using the modulo operator `%`.

Two counters, `temp_pairs` and `temp_odd`, keep track of the next available position in the `pairs` and `odd` arrays.

* If the number is even, it is stored in `pairs`.
* Otherwise, it is stored in `odd`.

The function returns the number of even elements found. The program then uses this value to determine how many elements are in the `odd` array.

For example:

`[1, 2, 3, 4, 5, 6]` → Even: `[2, 4, 6]` → Odd: `[1, 3, 5]`

### Steps

1. The user enters the array size.
2. The program stores the values in the original array.
3. Each value is checked using `% 2`.
4. Even values are copied to the `pairs` array.
5. Odd values are copied to the `odd` array.
6. The number of even elements is returned.
7. Both arrays are displayed separately.

## Concepts Used

* Functions
* Arrays
* `while` loops
* Conditional statements
* Modulo operator `%`
* Counters
* Separating data into multiple arrays

## Code

```c
#include <stdio.h>

int verifypairs(int size, int vetor[], int pairs[], int odd[])
{
    int i = 0;
    int temp_pairs = 0;
    int temp_odd = 0;

    while(i < size)
    {
        if((vetor[i] % 2) == 0)
        {
            pairs[temp_pairs] = vetor[i];
            temp_pairs++;
        }
        else
        {
            odd[temp_odd] = vetor[i];
            temp_odd++;
        }

        i++;
    }

    return temp_pairs;
}

int main()
{
    int size;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];
    int pairs[size];
    int odd[size];

    int temp;

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-------------\n");
    }

    temp = verifypairs(size, vetor, pairs, odd);

    printf("PAIRS:\n");

    for(int i = 0; i < temp; i++)
    {
        printf("%d\n", pairs[i]);
    }

    printf("---------------\n");

    printf("ODD:\n");

    for(int i = 0; i < (size - temp); i++)
    {
        printf("%d", odd[i]);
    }

    return 0;
}
```
