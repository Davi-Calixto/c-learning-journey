# Weighted Average

## Description

The program receives two grades and calculates their weighted average using weights `3.5` and `7.5`.

## Solution

The program stores the weights in the variables `A` and `B`.

The weighted average is calculated using:

```text
MEDIA = ((NA × A) + (NB × B)) / (A + B)
```

Each grade is multiplied by its respective weight, the results are added together, and the total is divided by the sum of the weights.

The result is displayed with five decimal places using `%.5lf`.

### Steps

1. Define the weights `3.5` and `7.5`.
2. Read the two grades.
3. Multiply each grade by its corresponding weight.
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
    double A = 3.5;
    double B = 7.5;

    double NA;
    double NB;
    double MEDIA;

    scanf("%lf\n%lf", &NA, &NB);

    MEDIA = ((NA * A) + (NB * B)) / (A + B);

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
```
