# Weight & Age Survey — C Arrays Exercise

A beginner C program that collects the weight and age of 7 people, counts how many are above 90kg, and calculates the average age.

Built as a hands-on exercise to practice **arrays** in C.

---

## What it does

1. Reads the weight and age of 7 people from the terminal
2. Counts how many people weigh **90kg or more**
3. Calculates the **average age** across all 7 people

---

## Concepts practiced

- Declaring arrays of different types (`int idade[7]`, `float peso[7]`)
- Reading multiple values in a single `scanf` call
- Accumulating a sum inside a loop
- Integer-to-float casting to calculate averages (`(float)soma / 7`)
- Conditional counting with `if` inside a loop

---

## How to compile and run

```bash
gcc 12.c -o age_weight
./age_weight
```

---

## Example output

```
Digite o peso e idade da pessoa 1
95.5 23
Digite o peso e idade da pessoa 2
70.0 31
...
PESSOAS COM MAIS DE 90KG: 2
MEDIA TOTAL DAS IDADES: 28.43
```

---

## Source code

```c
#include <stdio.h>

int main() {
    int idade[7];
    float peso[7];
    int obesidade = 0;
    int soma = 0;
    float mediatotal;

    for(int i = 0; i < 7; i++)
    {
        printf("Digite o peso e idade da pessoa %d\n", i + 1);
        scanf("%f %d", &peso[i], &idade[i]);

        soma += idade[i];

        if(peso[i] >= 90)
           obesidade++;
    }

    mediatotal = ((float)soma / 7);

    printf("PESSOAS COM MAIS DE 90KG: %d\n", obesidade);
    printf("MEDIA TOTAL DAS IDADES %.2f\n", mediatotal);

    return 0;
}
```

---

## Key lessons

- Arrays in C can hold different types — `int` for whole numbers, `float` for decimals like weight
- The order of variables in `scanf` must match the order the user is expected to type them
- Casting `soma` to `float` before dividing is essential — integer division would truncate the result and give a wrong average
