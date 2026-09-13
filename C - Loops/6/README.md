# 🔍 Remainder Filter — Divisible by 11 with Remainder 2

A C program that finds and displays all numbers between 1,000 and 2,000 (inclusive) that produce a remainder of 2 when divided by 11.

---

## 📋 Problem Statement

> Write a program that checks and displays the numbers between 1,000 and 2,000 (inclusive) that, when divided by 11, produce a remainder equal to 2.

---

## 💡 Solution Logic

**Loop over the range** — `num` starts at `1000` and increments by 1 each iteration until it reaches `2000`, covering every integer in the range.

**Remainder check** — the modulo operator `%` returns the remainder of a division. Any number where `num % 11 == 2` satisfies the condition and gets printed.

---

## 🔄 Program Flow

```
Start
  │
  ▼
num = 1000
  │
  ▼
num <= 2000? ──No──► End
  │
  Yes
  │
  ▼
num % 11 == 2? ──No──► num++
  │
  Yes
  │
  ▼
Print num
num++
  │
  └──────────────────┘
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    int num = 1000;

    printf("TODOS OS NUMEROS ENTRE 1000 E 2000 QUE DIVIDIDOS POR 11 PRODUZEM RESTO IGUAL A 2:\n\n");

    while (num <= 2000) {
        if ((num % 11) == 2) {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
```

---

## 🖥️ Sample Execution

```
TODOS OS NUMEROS ENTRE 1000 E 2000 QUE DIVIDIDOS POR 11 PRODUZEM RESTO IGUAL A 2:

1002
1013
1024
1035
...
1992
```

---

## 🛠️ How to Compile and Run

```bash
gcc 6.c -o remainder
./remainder
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
