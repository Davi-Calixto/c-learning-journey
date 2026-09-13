# Count Elements Above the Average

## Description

The program asks the user for the size of an array, stores its values, calculates the arithmetic average, and counts how many elements are greater than the average.

## Solution

First, the program calculates the sum of all array elements and then divides the sum by the array size to obtain the average.

The `biggerthanavg()` function receives the array, its size, and the calculated average. It goes through each element and checks whether its value is greater than the average.

Whenever an element is greater than the average, the counter is increased.

At the end, the function returns the number of elements above the average.

For example:

`[2, 4, 6, 8]` → average = `5` → `2` elements are above the average.

### Steps

1. The user enters the array size.
2. The program stores the values and calculates their sum.
3. The arithmetic average is calculated.
4. Each element is compared with the average.
5. The counter is increased for every value above the average.
6. The total number of elements above the average is displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Arithmetic mean
* Type casting
* Conditional statements
* Counters

## Code

```c
#include <stdio.h>

int biggerthanavg(int size, int vetor[], float avg)
{
    int j = 0;

    for(int i = 0; i < size; i++)
    {
        if(vetor[i] > avg)
        {
            j++;
        }
    }

    return j;
}

int main()
{
    int size;
    int j = 0;
    float avg = 0;
    int bigger_than_avg;

    printf("Type vector size: ");
    scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);

        j += vetor[i];

        printf("\n-------------\n");
    }

    avg = (float)j / size;

    bigger_than_avg = biggerthanavg(size, vetor, avg);

    printf("%d elements were found that are larger than the media.",
           bigger_than_avg);

    return 0;
}
```
