# Check if a Number Is Even

## Description

The program receives an integer and checks whether it is even or odd.

## Solution

The program uses the modulo operator `%` to check the remainder of the division by `2`.

If the remainder is `0`, the number is even. Otherwise, the number is odd.

```text
number % 2 == 0
```

### Steps

1. Read an integer from the user.
2. Divide it by `2` using the modulo operator.
3. Check whether the remainder is `0`.
4. Display whether the number is even or odd.

## Concepts Used

* Variables
* Integer arithmetic
* Modulo operator `%`
* Conditional statements
* `if / else`
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
        printf("O numero %d eh par", a);
    }
    else
    {
        p
```
