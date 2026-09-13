# Calculate Travel Time

## Description

The program receives a value representing the distance between two cities and calculates the travel time based on a fixed speed of 2 km per minute.

## Solution

The program reads the value `tempo` and multiplies it by `2`:

```text
travel time = distance × 2
```

The resulting value is displayed in minutes.

### Steps

1. Read the value of `tempo`.
2. Multiply it by `2`.
3. Display the result in minutes.

## Concepts Used

* Variables
* Integer arithmetic
* Multiplication
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int tempo;

    scanf("%d", &tempo);

    printf("%d minutos\n", tempo * 2);

    return 0;
}
```
