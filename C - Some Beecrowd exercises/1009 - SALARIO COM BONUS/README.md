# Calculate Total Salary with Commission

## Description

The program receives an employee's name, base salary, and total sales. It then calculates the employee's final salary by adding a `15%` commission on the sales amount.

## Solution

The program calculates the commission by multiplying the total sales by `0.15`:

```text
commission = sales × 0.15
```

Then, the commission is added to the base salary:

```text
total = salary + commission
```

The final amount is displayed with two decimal places.

For example:

`Salary = R$ 1000.00`

`Sales = R$ 2000.00`

`Commission = 2000 × 0.15 = R$ 300.00`

`Total = R$ 1300.00`

### Steps

1. Read the employee's name.
2. Read the base salary.
3. Read the total sales.
4. Calculate `15%` of the sales.
5. Add the commission to the base salary.
6. Display the final salary.

## Concepts Used

* Strings
* Variables
* `double`
* Percentage calculations
* Multiplication and addition
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    char nome[10];
    double salario;
    double vendas;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    double total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
```
