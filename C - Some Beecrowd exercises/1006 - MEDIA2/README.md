# Weighted Average with Three Grades

## Description

The program receives three grades and calculates their weighted average using weights `2.0`, `3.0`, and `5.0`.

## Solution

The program assigns a different weight to each grade and applies the weighted average formula:

```text
MEDIA = ((NA × A) + (NB × B) + (NC × C)) / (A + B + C)
```

Each grade is multiplied by its corresponding weight. The weighted values are then added together and divided by the total of the weights.

The result is displayed with one decimal place using `%.1lf`.

### Steps

1. Define the weights `2.0`, `3.0`, and `5.0`.
2. Read the three grades.
3. Multiply each grade by its respective weight.
4. Add the weighted values.
5. Divide by the sum of the weights.
6. Display the weighted average.

## Concepts Used

* Variables
* `double`
* Weighted averages
* Arithmetic operations
* Floating-point calculations
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    double A, B, C, NA, NB, NC, MEDIA;

    A = 2.0;
    B = 3.0;
    C = 5.0;

    scanf("%lf %lf %lf", &NA, &NB, &NC);

    MEDIA = ((NA * A) + (NB * B) + (NC * C)) / (A + B + C);

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
```
