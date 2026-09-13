# 🔢 Even & Odd Counter

A C program that reads 200 integers from the user and displays how many are even and how many are odd.

---

## 📋 Problem Statement

> Write a program that reads 200 integers and displays how many are even and how many are odd.

---

## 💡 Solution Logic

**Counter variable** — `contador` tracks how many numbers have been read, stopping the loop at 200.

**Even/odd check** — the modulo operator `%` checks the remainder of division by 2. If the remainder is `0`, the number is even; otherwise it is odd.

**Accumulators** — `contapar` and `contaimpar` increment each time an even or odd number is found, storing the final totals.

---

## 🔄 Program Flow

```
Start
  │
  ▼
contador = 1, contapar = 0, contaimpar = 0
  │
  ▼
Read number
  │
  ▼
num % 2 == 0? ──Yes──► Print "even", contapar++
  │
  No
  │
  ▼
Print "odd", contaimpar++
contador++
  │
  ▼
contador <= 200? ──Yes──► Read number
  │
  No
  │
  ▼
Print totals
End
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    int num;
    int contador = 1;
    int contapar = 0;
    int contaimpar = 0;

    do {
        printf("DIGITE UM NUMERO\n");
        scanf("%d", &num);

        if ((num % 2) == 0) {
            printf("%d eh par\n", num);
            contapar++;
        } else {
            printf("%d eh impar\n", num);
            contaimpar++;
        }
        contador++;

    } while (contador <= 200);

    printf("NUMEROS PARES RECEBIDOS - %d\n", contapar);
    printf("NUMEROS IMPARES RECEBIDOS - %d\n", contaimpar);

    return 0;
}
```

---

## 🖥️ Sample Execution

```
DIGITE UM NUMERO
1  →  1 eh impar
DIGITE UM NUMERO
2  →  2 eh par
...
NUMEROS PARES RECEBIDOS - 100
NUMEROS IMPARES RECEBIDOS - 100
```

> When inputting numbers 1 through 200, the result is exactly 100 even and 100 odd numbers.

---

## 🛠️ How to Compile and Run

```bash
gcc 9.c -o pares_impares
./pares_impares
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
