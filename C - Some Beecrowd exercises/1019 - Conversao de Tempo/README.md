# Convert Seconds to Hours, Minutes, and Seconds

## Description

The program receives a total amount of time in seconds and converts it into hours, minutes, and remaining seconds.

## Solution

The program uses integer division (`/`) to calculate the number of complete hours:

```text
hours = seconds / 3600
```

Then, the modulo operator (`%`) is used to find the remaining seconds after removing the complete hours.

The remaining value is divided by `60` to calculate the complete minutes, and another modulo operation gives the remaining seconds.

For example, `3665` seconds becomes:

```text
1 hour
1 minute
5 seconds
```

### Steps

1. Read the total number of seconds.
2. Divide by `3600` to calculate the hours.
3. Use `% 3600` to get the remaining seconds.
4. Divide the remainder by `60` to calculate the minutes.
5. Use `% 60` to get the remaining seconds.
6. Display the result in `hours:minutes:seconds` format.

## Concepts Used

* Variables
* Integer division
* Modulo operator `%`
* Arithmetic operations
* Remainder calculation
* Formatted output

## Code

```c
#include <stdio.h>

int main()
{
    int segundos;

    scanf("%d", &segundos);

    int h = segundos / 3600;

    int resto = segundos % 3600;

    int m = resto / 60;

    int s = resto % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
```
