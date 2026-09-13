# Add or Multiply Based on Equality

## Description

The program receives two integers and performs a different operation depending on whether they are equal.

* If the values are equal, they are added together.
* If the values are different, they are multiplied.

## Solution

The program compares `a` and `b` using the equality operator `==`.

If `a == b`, the program calculates their sum:

```text
a + b
```

Otherwise, it calculates their product:

```text
a × b
```

The result is then displayed.

### Steps

1. Read two integer values.
2. Check whether the values are equal.
3. If they are equal, calculate their sum.
4. Otherwise, calculate their product.
5. Display the result.

## Concepts Used

* Variables
* Integer arithmetic
* Addition
* Multiplication
* Comparison operators
* `if / else`
* Conditional logic
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite primeiro valor numerico\n\n");
    scanf("%d", &a);

    printf("Digite o segundo valor numerico\n\n");
    scanf("%d", &b);

    if(a == b)
    {
        int s = a + b;

        printf(
            "Como os valores sao iguais, sua soma resulta em %d\n\n",
            s
        );
    }
    else
    {
        int s = a * b;

        printf(
            "Como os valores sao diferentes, sua multiplicacao resulta em %d\n\n",
            s
        );
    }

    return 0;
}
```
