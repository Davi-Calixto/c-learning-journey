# Convert Days to Years, Months, and Days

## Description

The program receives a total number of days and converts it into years, months, and remaining days.

For this calculation, each year is considered to have `365` days and each month `30` days.

## Solution

The program first uses integer division to calculate the number of complete years:

```text
years = days / 365
```

Then, the modulo operator (`%`) is used to obtain the remaining days after removing the complete years.

The remaining value is divided by `30` to calculate the number of complete months. Another modulo operation gives the remaining days.

For example, `400` days becomes:

```text
1 year
1 month
5 days
```

### Steps

1. Read the total number of days.
2. Divide by `365` to calculate the years.
3. Use `% 365` to obtain the remaining days.
4. Divide the remainder by `30` to calculate the months.
5. Use `% 30` to obtain the remaining days.
6. Display the result.

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
    int dias;

    scanf("%d", &dias);

    int anos = dias / 365;

    int resto = dias % 365;

    int mes = resto / 30;

    int d = resto % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, mes, d);

    return 0;
}
```
