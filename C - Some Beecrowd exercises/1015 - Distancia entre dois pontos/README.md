# Calculate the Distance Between Two Points

## Description

The program receives the coordinates of two points in a two-dimensional plane and calculates the distance between them.

## Solution

Each point is represented by an array containing its `x` and `y` coordinates.

The program uses the distance formula:

```text
d = √((x₂ - x₁)² + (y₂ - y₁)²)
```

`pow()` is used to calculate the squared differences, while `sqrt()` calculates the square root of their sum.

For example:

```text
P1 = (1, 2)
P2 = (4, 6)

d = √((4 - 1)² + (6 - 2)²)
d = √(9 + 16)
d = 5
```

The result is displayed with four decimal places.

### Steps

1. Read the coordinates of the first point.
2. Read the coordinates of the second point.
3. Calculate the squared difference between the `x` coordinates.
4. Calculate the squared difference between the `y` coordinates.
5. Add the two results.
6. Calculate the square root.
7. Display the distance.

## Concepts Used

* Arrays
* `float`
* Arithmetic operations
* Mathematical formulas
* `pow()`
* `sqrt()`
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float P1[2];
    float P2[2];

    scanf("%f %f", &P1[0], &P1[1]);
    scanf("%f %f", &P2[0], &P2[1]);

    float A = pow((P2[0] - P1[0]), 2);
    float B = pow((P2[1] - P1[1]), 2);

    float total = sqrt(A + B);

    printf("%.4f\n", total);

    return 0;
}
```
