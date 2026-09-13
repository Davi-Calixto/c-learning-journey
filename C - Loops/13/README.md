# Age & Gender Survey — C Exercise

A beginner C program that collects the age and gender of 7 people and calculates the average age for the whole group, for men only, and for women only.

---

## What it does

1. Reads the gender (`M/F`) and age of 7 people from the terminal
2. Calculates the **average age of the entire group**
3. Calculates the **average age of the men**
4. Calculates the **average age of the women**

---

## Concepts practiced

- Reading `char` input with `scanf(" %c", ...)`
- Accumulating separate sums based on a condition (`somahomens`, `somamulheres`)
- Counting occurrences with float counters (`qtdehomens`, `qtdemulheres`)
- Ternary operator to guard against division by zero
- Formatted output with `printf` and `%.2f`

---

## How to compile and run

```bash
gcc 13.c -o men_women_mean
./men_women_mean
```

---

## Example output

```
Digite seu sexo: (M/F)
M
Digite sua idade:
25
...
Idade media do grupo: 30.43
Idade media dos homens: 28.00
Idade media das mulheres: 34.00
```

---

## Source code

```c
#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float soma = 0;
    float mediatotal;
    float qtdehomens = 0;
    float qtdemulheres = 0;
    float mediahomens;
    float mediamulheres;
    float somahomens = 0;
    float somamulheres = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Digite seu sexo: (M/F)\n");
        scanf(" %c", &sexo);

        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        if(sexo == 'M' || sexo == 'm'){
           qtdehomens++;
           somahomens += idade;
        } else if(sexo == 'F' || sexo == 'f'){
           qtdemulheres++;
           somamulheres += idade;
        }

        soma += (float)idade;
    }

    mediatotal = (soma / 7.0);
    mediahomens  = (qtdehomens > 0)   ? (somahomens / qtdehomens)     : 0;
    mediamulheres = (qtdemulheres > 0) ? (somamulheres / qtdemulheres) : 0;

    printf("Idade media do grupo: %.2f\n", mediatotal);
    printf("Idade media dos homens: %.2f\n", mediahomens);
    printf("Idade media das mulheres: %.2f\n", mediamulheres);

    return 0;
}
```

---

## Key lessons

- Always initialize accumulators to `0` — uninitialized `float` variables hold garbage values from memory
- In C, `if` without curly braces only covers the next single line — always use `{}` for multi-line blocks
- The ternary operator `condition ? a : b` requires both branches — it is a safeguard against division by zero when a group may be empty
- Reading `char` with `scanf` requires a leading space (`" %c"`) to skip leftover newline characters from previous inputs
