# Find the Largest of Three Numbers

## Description

The program receives three integers and finds the largest value among them.

## Solution

The program first finds the largest value between `A` and `B` using:

```text
(A + B + |A - B|) / 2
```

It then compares that result with `C` using the same formula.

The `abs()` function returns the absolute value of the difference, allowing the formula to select the larger of two numbers without using `if` statements.

### Steps

1. Read the values of `A`, `B`, and `C`.
2. Find the largest value between `A` and `B`.
3. Compare that result with `C`.
4. Display the largest value.

## Concepts Used

* Variables
* Integer arithmetic
* `abs()` function
* Mathematical expressions
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int maiorAB = (A + B + abs(A - B)) / 2;
    int maiorC = (maiorAB + C + abs(maiorAB - C)) / 2;

    printf("%d eh o maior\n", maiorC);

    return 0;
}
```
