# Calculate Employee Salary

## Description

The program receives an employee's ID, the number of hours worked, and the amount earned per hour. It then calculates the employee's total salary.

## Solution

The program calculates the salary by multiplying the number of hours worked by the hourly rate:

```text
salary = hours × value per hour
```

The employee's ID is displayed together with the calculated salary, formatted with two decimal places.

### Steps

1. Read the employee's ID.
2. Read the number of hours worked.
3. Read the hourly payment.
4. Multiply the hours by the hourly payment.
5. Display the employee's ID and salary.

## Concepts Used

* Variables
* `int` and `float`
* Multiplication
* Arithmetic expressions
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int num;
    float horas, vph;

    scanf("%d %f %f", &num, &horas, &vph);

    float salario = horas * vph;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salario);

    return 0;
}
```
