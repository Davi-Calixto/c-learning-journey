# 🔢 Multiples of 3 and 5

A C program that reads a number from the user and displays all numbers in the range 1 to NUM that are multiples of both 3 and 5.

---

## 📋 Problem Statement

> Create a program that reads a number (NUM) and then displays all numbers that are multiples of both 3 and 5, in the closed interval from 1 to NUM.

---

## 💡 Solution Logic

**Single input** — the number is read once before the loop, defining the upper boundary of the range.

**Counter variable** — `contador` starts at `1` and increments each iteration, representing each number in the range being checked.

**`&&` operator** — both conditions must be true simultaneously. A number must be divisible by 3 **and** by 5 to be printed. This is equivalent to checking divisibility by 15.

---

## 🔄 Program Flow

```
Start
  │
  ▼
Read NUM
  │
  ▼
contador = 1
  │
  ▼
contador <= NUM? ──No──► End
  │
  Yes
  │
  ▼
contador % 3 == 0
AND
contador % 5 == 0? ──No──► contador++
  │
  Yes
  │
  ▼
Print contador
contador++
  │
  └──────────────────┘
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    int num;
    int contador = 1;

    printf("Digite um numero\n");
    scanf("%d", &num);

    do {
        if ((contador % 3) == 0 && (contador % 5) == 0) {
            printf("%d\n", contador);
        }
        contador++;

    } while (contador <= num);

    return 0;
}
```

---

## 🖥️ Sample Execution

```
Digite um numero
100

15
30
45
60
75
90
```

> All results are multiples of 15 (3 × 5), which is the expected behavior.

---

## 🛠️ How to Compile and Run

```bash
gcc 8.c -o multiplos
./multiplos
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
