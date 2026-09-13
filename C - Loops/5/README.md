# 🔢 Multiplication Table

A C program that receives a number from the user and displays its full multiplication table using a loop.

---

## 📋 Problem Statement

> Write a program that receives a number and using repetition loops calculates and displays the multiplication table of that number.

---

## 💡 Solution Logic

**Counter variable** — `contador` starts at `1` and increments each iteration, controlling both the loop and the multiplier.

**`while` loop** — runs while `contador <= 10`, printing one line of the table per iteration.

**Result variable** — `tabuada` stores the result of `num * contador` before printing, making the code more readable.

---

## 🔄 Program Flow

```
Start
  │
  ▼
Read number
  │
  ▼
contador = 1
  │
  ▼
contador <= 10? ──No──► Display done
  │
  Yes
  │
  ▼
tabuada = num * contador
Print: num x contador = tabuada
contador++
  │
  └──────────────────────┘
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    int num;
    int tabuada = 0;
    int contador = 1;

    printf("Digite um numero\n");
    scanf("%d", &num);

    printf("A tabuada do numero %d corresponde a:\n\n", num);

    while (contador <= 10) {
        tabuada = num * contador;
        printf("%d x %d = %d\n", num, contador, tabuada);
        contador++;
    }

    return 0;
}
```

---

## 🖥️ Sample Execution

```
Digite um numero
5

A tabuada do numero 5 corresponde a:

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

---

## 🛠️ How to Compile and Run

```bash
gcc 5.c -o tabuada
./tabuada
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
