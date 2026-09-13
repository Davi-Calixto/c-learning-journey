# Add a Value Based on Parity

## Description

The program receives an integer and changes its value depending on whether it is even or odd.

* Even numbers receive `+2`.
* Odd numbers receive `+4`.

## Solution

The program uses the modulo operator `%` to determine whether the number is even.

If `a % 2 == 0`, the number is even, so `2` is added to it.

Otherwise, the number is odd, so `4` is added.

For example:

```text
Even: 10 → 12
Odd: 7 → 11
```

### Steps

1. Read an integer.
2. Check its remainder when divided by `2`.
3. If the number is even, add `2`.
4. If the number is odd, add `4`.
5. Display the resulting value.

## Concepts Used

* Variables
* Integer arithmetic
* Modulo operator `%`
* `if / else`
* Conditional logic
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um numero\n");
    scanf("%d", &a);

    if(a % 2 == 0)
    {
        a = a + 2;
        printf("%d", a);
    }
    else
    {
        a = a + 4;
        printf("%d", a);
    }

    return 0;
}
```
