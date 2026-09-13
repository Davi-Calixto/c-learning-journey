# Find the Largest Element

## Description

The program asks the user for the size of an array, stores the numbers entered, and finds the largest value in the array.

## Solution

The `maior()` function receives the array and its size. It starts by assuming that the first element is the largest.

A `for` loop then checks the remaining elements. If an element is greater than the current largest value, `maior` is updated.

After checking all elements, the function returns the largest value to `main()`.

### Steps

1. The user enters the array size.
2. The program stores the numbers in the array.
3. The first element is used as the initial largest value.
4. Each element is compared with the current largest value.
5. The largest value is returned and displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int maior(int size, int vetor[])
{
    int maior = vetor[0];

    for(int i = 0; i < size; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int main()
{
    int size;

    printf("Type vetor size:\n");
    scanf("%d", &size);

    printf("-----------\n");

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type the %d number\n", i + 1);
        scanf("%d", &vetor[i]);

        printf("\n-----------\n");
    }

    int bigg_num = maior(size, vetor);

    printf("The biggest num that you're typed is: --> %d", bigg_num);

    return 0;
}
```
