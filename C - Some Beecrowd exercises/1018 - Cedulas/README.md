# Calculate Banknote Distribution

## Description

The program receives an integer amount of money and determines how many banknotes of each available denomination are needed.

The denominations used are:

`100, 50, 20, 10, 5, 2, 1`

## Solution

The program uses integer division (`/`) to determine how many banknotes of each denomination fit into the remaining amount.

After each calculation, the modulo operator (`%`) is used to find the remaining value.

For example, with `187`:

```text
1 × R$ 100
1 × R$ 50
1 × R$ 20
1 × R$ 10
1 × R$ 5
1 × R$ 2
0 × R$ 1
```

### Steps

1. Read the total amount.
2. Calculate the number of R$100 notes.
3. Calculate the remaining amount using `%`.
4. Repeat the process for R$50, R$20, R$10, R$5, R$2, and R$1.
5. Display the number of notes of each denomination.

## Concepts Used

* Variables
* Integer division
* Modulo operator `%`
* Arithmetic operations
* Remainders
* Sequential processing
* Input and output with `scanf()` and `printf()`

## Code

```c
#include <stdio.h>

int main()
{
    int total, resto;

    scanf("%d", &total);

    printf("%d\n", total);

    int n100 = total / 100;
    resto = total % 100;

    printf("%d nota(s) de R$ 100,00\n", n100);

    int n50 = resto / 50;
    resto = resto % 50;

    printf("%d nota(s) de R$ 50,00\n", n50);

    int n20 = resto / 20;
    resto = resto % 20;

    printf("%d nota(s) de R$ 20,00\n", n20);

    int n10 = resto / 10;
    resto = resto % 10;

    printf("%d nota(s) de R$ 10,00\n", n10);

    int n5 = resto / 5;
    resto = resto % 5;

    printf("%d nota(s) de R$ 5,00\n", n5);

    int n2 = resto / 2;
    resto = resto % 2;

    printf("%d nota(s) de R$ 2,00\n", n2);

    int n1 = resto / 1;

    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}
```
