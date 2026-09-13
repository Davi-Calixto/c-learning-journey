# Positive Numbers Sum

A C program that reads integers from the user while they are positive and displays the total sum at the end.

## Description

The algorithm uses a `do-while` loop to ensure at least one number is requested before the condition is checked. On each iteration, the input is added to the sum **only if it is positive**. When a negative number is entered, the loop terminates and the accumulated sum is displayed.

## Example

```
Enter a number: 5
Enter a number: 10
Enter a number: 3
Enter a number: -1
NEGATIVE NUMBER ENTERED -> ALGORITHM TERMINATED
---------------------------------------------------
The sum of the positive numbers entered is: 18
```

## Logic breakdown

- `do-while` is used because input must be read before the condition is checked
- The `if (num >= 0)` inside the loop prevents the negative number from being added to the sum
- The loop exits when `num < 0`

## Code

```c
#include <stdio.h>

int main() {

    int num;
    int soma = 0;

    do {
        printf("Enter a number:\n");
        scanf("%d", &num);

        if (num >= 0)
            soma += num;

    } while (num >= 0);

    printf("NEGATIVE NUMBER ENTERED -> ALGORITHM TERMINATED\n");
    printf("---------------------------------------------------\n");
    printf("The sum of the positive numbers entered is: %d\n", soma);

    return 0;
}
```

## Build & run

```bash
gcc 2.c -o positive_sum
./positive_sum
```

## Concepts covered

- `do-while` loop
- Conditional `if`
- Accumulator pattern (`soma`)
- Input with `scanf` and output with `printf`
