# Calculate the Difference Between Products

## Description

The program receives four integers and calculates the difference between the product of `A` and `B` and the product of `C` and `D`.

## Solution

The calculation is performed using the formula:

```text
DIFERENCA = (A × B) - (C × D)
```

The program first multiplies `A` by `B`, then multiplies `C` by `D`, and finally subtracts the second result from the first.

### Steps

1. Read the values of `A`, `B`, `C`, and `D`.
2. Calculate `A × B`.
3. Calculate `C × D`.
4. Subtract the second product from the first.
5. Display the result.

## Concepts Used

* Variables
* Integer arithmetic
* Multiplication
* Subtraction
* Arithmetic expressions
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    int DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
```
