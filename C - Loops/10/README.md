# ➕ Harmonic Sum

A C program that reads a positive integer N and calculates the sum S = 1 + 1/2 + 1/3 + ... + 1/N.

---

## 📋 Problem Statement

> Write a program that reads a value N, integer and positive, calculates and displays the following sum: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N.

---

## 💡 Solution Logic

**Pattern recognition** — each term in the sum follows the pattern `1 / position`, where position goes from 1 to N.

**Accumulator** — `soma` starts at `0` and adds `1.0 / contador` each iteration, building the total progressively.

**Float division** — using `1.0 / contador` instead of `1 / contador` ensures decimal division, since integer division would truncate the result to 0 for all terms after the first.

---

## 🔄 Program Flow

```
Start
  │
  ▼
Read N
  │
  ▼
contador = 1, soma = 0
  │
  ▼
contador <= N? ──No──► Print soma
  │
  Yes
  │
  ▼
soma += 1.0 / contador
contador++
  │
  └──────────────────┘
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    float num;
    int contador = 1;
    float soma = 0;

    printf("Digite um numero\n");
    scanf("%f", &num);

    while (contador <= num) {
        soma += (1.0 / contador);
        contador++;
    }

    printf("Soma = %.2f\n", soma);

    return 0;
}
```

---

## 🖥️ Sample Execution

```
Digite um numero
4

Soma = 2.08
```

> S = 1/1 + 1/2 + 1/3 + 1/4 = 1 + 0.5 + 0.333 + 0.25 = 2.083

---

## 🛠️ How to Compile and Run

```bash
gcc 10.c -o soma
./soma
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
