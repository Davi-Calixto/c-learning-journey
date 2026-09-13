# Calculate the Total Price of Two Products

## Description

The program receives the code, quantity, and unit price of two products and calculates the total amount to be paid.

## Solution

For each product, the program multiplies its unit price by its quantity:

```text
product total = unit price × quantity
```

The totals of both products are then added together:

```text
total = (price₁ × quantity₁) + (price₂ × quantity₂)
```

The final amount is displayed with two decimal places.

### Steps

1. Read the code, quantity, and price of the first product.
2. Read the code, quantity, and price of the second product.
3. Calculate the total price of each product.
4. Add both values together.
5. Display the total amount to be paid.

## Concepts Used

* Variables
* `int` and `float`
* Multiplication
* Addition
* Arithmetic expressions
* Formatted input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int cod, cod2;

    float valor, valor2;
    float qnt_pecas, qnt_pecas2;
    float total;

    scanf("%d %f %f", &cod, &qnt_pecas, &valor);

    scanf("%d %f %f", &cod2, &qnt_pecas2, &valor2);

    total = (valor * qnt_pecas) + (valor2 * qnt_pecas2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
```
