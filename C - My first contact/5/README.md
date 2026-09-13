# Read Three Integer Values

## Description

The program reads three integer values entered by the user and stores them in the variables `a`, `b`, and `c`.

## Solution

The program declares three integer variables and uses `scanf()` to read a value for each one.

The values are stored using their memory addresses with `&`:

```text
&a
&b
&c
```

At the moment, the program only reads and stores the values. No calculation or comparison is performed after the input.

### Steps

1. Declare three integer variables.
2. Read the first value into `a`.
3. Read the second value into `b`.
4. Read the third value into `c`.
5. End the program.

## Concepts Used

* Variables
* `int`
* Input with `scanf()`
* Addresses with `&`

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro valor");
    scanf("%d", &a);

    printf("Digite o segundo valor");
    scanf("%d", &b);

    printf("Digite o terceiro valor");
    scanf("%d", &c);

    return 0;
}
```
