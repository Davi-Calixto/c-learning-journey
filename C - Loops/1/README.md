# Positive Number Counter

## Problem Statement

Write a program that receives numbers from the user while they are positive. At the end, the program must print how many numbers were entered.

## Solution

```c
#include <stdio.h>

int main() {

    int num;
    int contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        contador++;

    } while (num > 0);

    printf("Voce digitou um numero negativo. Conta encerrada\n");
    printf("--------------------------\n");
    printf("Voce digitou %d numeros\n", contador);

    return 0;
}
```

## How It Works

The program uses a **do-while loop** to repeatedly prompt the user for input:

1. The loop body always executes at least once before the condition is checked.
2. On each iteration, the user enters a number, which is stored in `num`, and `contador` (counter) is incremented.
3. The loop continues as long as the entered number is greater than zero (`num > 0`).
4. When the user enters a non-positive number (zero or negative), the loop exits and the total count is printed.

> **Note:** The non-positive number itself is counted in the final total, since `contador++` runs before the condition is evaluated.

## Concepts Covered

- `do-while` loop
- User input with `scanf`
- Counter variable pattern

## Example Run

```
Digite um numero: 5
Digite um numero: 12
Digite um numero: 3
Digite um numero: -1
Voce digitou um numero negativo. Conta encerrada
--------------------------
Voce digitou 4 numeros
```

## How to Compile and Run

```bash
gcc 1.c -o counter
./counter
```
