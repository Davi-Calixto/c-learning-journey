# Compare the Sum of Two Numbers with a Third

## Description

The program receives three integers, calculates the sum of `A` and `B`, and compares the result with `C`.

It displays whether the sum is less than, greater than, or equal to `C`.

## Solution

First, the program calculates the sum of `A` and `B`:

```text
S = A + B
```

Then, an `if / else if / else` structure compares `S` with `C`.

* If `S < C`, the sum is smaller than `C`.
* If `S > C`, the sum is greater than `C`.
* Otherwise, the sum is equal to `C`.

### Steps

1. Read the values of `A`, `B`, and `C`.
2. Calculate `A + B`.
3. Compare the sum with `C`.
4. Display the corresponding result.

## Concepts Used

* Variables
* Integer arithmetic
* Addition
* Comparison operators
* `if / else if / else`
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int s;

    printf("Digite o valor de A\n");
    scanf("%d", &a);

    printf("Digite o valor de B\n");
    scanf("%d", &b);

    printf("Digite o valor de C\n");
    scanf("%d", &c);

    s = a + b;

    if(s < c)
    {
        printf(
            "O valor de %d (soma dos valores de %d e %d) eh menor que o valor de %d\n",
            s, a, b, c
        );
    }
    else if(s > c)
    {
        printf(
            "O valor de %d (soma dos valores de %d e %d) eh maior que o valor de %d\n",
            s, a, b, c
        );
    }
    else
    {
        printf(
            "O valor de %d (soma dos valores de %d e %d) eh igual ao valor de %d\n",
            s, a, b, c
        );
    }

    return 0;
}
```
