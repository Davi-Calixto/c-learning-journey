# 🧊 Cube Calculator

A C program that receives ten numbers from the user and displays the cube of each one.

---

## 📋 Problem Statement

> Write a program that receives ten numbers from the user and for each number displays the value of its cube.

---

## 💡 Solution Logic

**Separate function** — `calc_cubo()` receives a number and returns its cube, keeping the code organized and reusable.

**`do...while` loop** — runs exactly 10 times, controlled by `contador`, reading one number and printing its cube per iteration.

---

## 🔄 Program Flow

```
Start
  │
  ▼
contador = 1
  │
  ▼
Read number
  │
  ▼
cubo = calc_cubo(num)
Print cubo
contador++
  │
  ▼
contador <= 10? ──Yes──► Read number
  │
  No
  │
  ▼
End
```

---

## 🧾 Code

```c
#include <stdio.h>

int calc_cubo(int a) {
    return a * a * a;
}

int main() {

    int contador = 1;
    int num;

    do {
        printf("Digite um número\n");
        scanf("%d", &num);
        int cubo = calc_cubo(num);
        printf("%d\n", cubo);
        contador++;

    } while (contador <= 10);

    return 0;
}
```

---

## 🖥️ Sample Execution

```
Digite um número: 1  →  1
Digite um número: 2  →  8
Digite um número: 3  →  27
Digite um número: 4  →  64
Digite um número: 5  →  125
Digite um número: 6  →  216
Digite um número: 7  →  343
Digite um número: 8  →  512
Digite um número: 9  →  729
Digite um número: 10 →  1000
```

---

## 🛠️ How to Compile and Run

```bash
gcc 7.c -o cubo
./cubo
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
