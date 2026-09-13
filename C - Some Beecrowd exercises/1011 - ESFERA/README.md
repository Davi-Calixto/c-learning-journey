# Calculate the Volume of a Sphere

## Description

The program receives the radius of a sphere and calculates its volume.

## Solution

The volume is calculated using the formula:

```text
V = (4/3) × π × r³
```

The program uses `double` to handle decimal values and calculates the cube of the radius by multiplying it three times.

The result is displayed with three decimal places.

For example, with a radius of `3`:

```text
V = (4/3) × 3.14159 × 3³
```

### Steps

1. Read the radius.
2. Calculate the radius cubed.
3. Apply the sphere volume formula.
4. Display the result with three decimal places.

## Concepts Used

* Variables
* `double`
* Floating-point arithmetic
* Mathematical formulas
* Multiplication
* Division
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    double volume, raio;

    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * 3.14159 * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
```
