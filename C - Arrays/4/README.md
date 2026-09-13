# Count Occurrences of a Number

## Description

The program asks the user for the size of an array, stores the values entered, and counts how many times a specific number appears in the array.

## Solution

The `verify()` function receives the array, its size, and the number that should be searched.

A variable called `equal` starts at `0` and is used to count the occurrences. A `for` loop goes through every element of the array and compares it with the search value.

Whenever the values are equal, `equal` is increased by `1`.

After checking the entire array, the function returns the number of occurrences.

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The user chooses a number to search for.
4. Each array element is compared with the search value.
5. The counter is increased whenever a match is found.
6. The total number of occurrences is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Comparison operators
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int verify(int size, int vetor[], int search)
{
    int equal = 0;

    for(int i = 0; i < size; i++)
    {
        if(vetor[i] == search)
        {
            equal++;
        }
    }

    return equal;
}

int main()
{
    int size;
    int equal_value;
    int search_value;

    printf("Type vetor size: ");
    scanf("%d", &size);

    printf("\n---------------\n");

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d value: ", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n---------------\n");
    }

    printf("Which number do you want to check how many times it repeats?: ");
    scanf("%d", &search_value);

    equal_value = verify(size, vetor, search_value);

    printf("\nThe %d number repeats %d times.", search_value, equal_value);

    return 0;
}
```
