# Age Survey — C Arrays Exercise

A beginner C program that collects the ages of 15 people and calculates the percentage of individuals in the youngest and oldest age groups.

Built as a hands-on exercise to practice **arrays** in C.

---

## What it does

1. Reads the age of 15 people from the terminal
2. Classifies each age into one of five groups:
   - Up to 15 years old
   - 16 to 30 years old
   - 31 to 45 years old
   - 46 to 60 years old
   - 61 years old and above
3. Prints the percentage of people in the **first** (≤ 15) and **last** (≥ 61) age groups

---

## Concepts practiced

- Declaring and indexing integer arrays (`int idade[15]`)
- Reading user input with `scanf` inside a loop
- Conditional classification with `if / else if`
- Integer-to-float division to calculate percentages
- Formatted output with `printf`

---

## How to compile and run

```bash
gcc 11.c -o age_survey
./age_survey
```

---

## Example output

```
Digite a idade da pessoa 1
22
Digite a idade da pessoa 2
14
...
PESSOAS ATE 15 ANOS: 13.33%
PESSOAS ACIMA DE 61 ANOS: 6.67%
```

---

## Source code

```c
#include <stdio.h>

int main() {
    int idade[15];
    int faixa1 = 0, faixa2 = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a idade da pessoa %d\n", i + 1);
        scanf("%d", &idade[i]);

        if (idade[i] <= 15)
            faixa1++;
        else if (idade[i] >= 61)
            faixa2++;
    }

    float perc1 = (faixa1 / 15.0) * 100;
    float perc2 = (faixa2 / 15.0) * 100;

    printf("PESSOAS ATE 15 ANOS: %.2f%%\n", perc1);
    printf("PESSOAS ACIMA DE 61 ANOS: %.2f%%\n", perc2);

    return 0;
}
```

---

## Key lesson

Array size in C represents the **number of elements**, not the number of digits. `int idade[15]` creates exactly 15 slots — one per person — and each slot holds a full integer regardless of how many digits it has.
