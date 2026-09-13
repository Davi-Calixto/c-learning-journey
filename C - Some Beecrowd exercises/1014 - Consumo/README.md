# Calculate Fuel Efficiency

## Description

The program receives the distance traveled and the amount of fuel consumed, then calculates the vehicle's fuel efficiency in kilometers per liter.

## Solution

The program reads two values:

* `A` — the distance traveled in kilometers.
* `B` — the amount of fuel consumed in liters.

The fuel efficiency is calculated by dividing the distance by the amount of fuel:

```text
km/l = A / B
```

The distance is converted to `float` before the division to ensure a decimal result.

The result is displayed with three decimal places.

### Steps

1. Read the distance traveled.
2. Read the amount of fuel consumed.
3. Convert the distance to `float`.
4. Divide the distance by the fuel consumed.
5. Display the result in kilometers per liter.

## Concepts Used

* Variables
* `int` and `float`
* Type casting
* Arithmetic operations
* Floating-point division
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int A;
    float B;

    scanf("%d %f", &A, &B);

    printf("%.3f km/l\n", (float)A / B);

    return 0;
}
```
