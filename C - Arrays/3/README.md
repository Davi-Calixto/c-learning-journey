# Count Even Numbers

## Description

The program asks the user for the size of an array, stores the numbers entered, and counts how many of them are even.

## Solution

The `pairs()` function receives the array and its size. A variable called `pair_num` starts at `0` and is used to count the even numbers.

A `for` loop checks each element using the modulo operator `%`. If the remainder of the division by `2` is `0`, the number is even, so `pair_num` is increased by `1`.

After checking all elements, the function returns the total number of even values.

### Steps

1. The user enters the array size.
2. The program stores the numbers in the array.
3. Each element is checked using `% 2`.
4. The counter is increased whenever an even number is found.
5. The total number of even values is returned and displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Modulo operator `%`
* Conditional statements
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int pairs(int size, int vetor[])
{
    int pair_num = 0;

    for(int i = 0; i < size; i++)
    {
        if((vetor[i] % 2) == 0)
        {
            pair_num++;
        }
    }

    return pair_num;
}

int main() 
{
    int size;
    printf("Type vetor size: "); scanf("%d", &size);
    printf("\n-----------\n");

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number: ", i + 1); scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    int pair = pairs(size, vetor);

    printf("In the sequence that you typed, we have a %d pairs numbers! :)", pair);

    return 0;
}
```
