# Calculate Areas of Geometric Shapes

## Description

The program receives three decimal values and calculates the areas of five geometric shapes:

* Triangle
* Circle
* Trapezoid
* Square
* Rectangle

The results are displayed with three decimal places.

## Solution

The program reads the values `A`, `B`, and `C` and applies a specific formula for each shape.

The formulas used are:

```text
Triangle:  (A × C) / 2
Circle:    C² × π
Trapezoid: ((A + B) × C) / 2
Square:    B²
Rectangle: A × B
```

The program uses `double` variables to handle decimal values and `3.14159` as the value of π.

### Steps

1. Read the values `A`, `B`, and `C`.
2. Calculate the area of the triangle.
3. Calculate the area of the circle.
4. Calculate the area of the trapezoid.
5. Calculate the area of the square.
6. Calculate the area of the rectangle.
7. Display all results with three decimal places.

## Concepts Used

* Variables
* `double`
* Arithmetic operations
* Mathematical formulas
* Floating-point calculations
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %.3lf\n", (A * C) / 2);
    printf("CIRCULO: %.3lf\n", (C * C) * 3.14159);
    printf("TRAPEZIO: %.3lf\n", ((A + B) * C) / 2);
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);

    return 0;
}
```
