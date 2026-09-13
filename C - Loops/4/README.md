# 📊 Largest Even & Smallest Odd

A C program that reads positive numbers from the user and displays the largest even number and the smallest odd number entered.

---

## 📋 Problem Statement

> Write a program that receives numbers from the user while they are positive and at the end displays the largest EVEN number entered and the smallest ODD number entered. To terminate, the user must enter a negative value.

---

## 💡 Solution Logic

**`do...while` loop** — ensures the user enters at least one number before the exit condition is checked. The loop terminates when a negative number is received.

**Negative filter** — after reading, an `if (num >= 0)` block prevents the terminating negative number from entering the even/odd logic.

**Control flags** — `conta_par` and `conta_impar` track whether at least one even or odd number was found, preventing fictional initial values from being displayed as results.

**Initial value for odd** — `impar_menor` starts at `1000000` to ensure any odd number entered will be smaller and overwrite it.

---

## 🔄 Program Flow

```
Start
  │
  ▼
Read number
  │
  ├─ Negative? ──► Exit loop
  │
  ├─ Even? ──► Greater than par_maior? ──► Update par_maior
  │                Set conta_par = 1
  │
  └─ Odd? ──► Less than impar_menor? ──► Update impar_menor
                  Set conta_impar = 1
  │
  ▼
Display results
```

---

## 🧾 Code

```c
#include <stdio.h>

int main() {

    int num;
    int par_maior = 0;
    int impar_menor = 1000000;
    int conta_par = 0;
    int conta_impar = 0;

    do {
        printf("Digite um numero\n");
        scanf("%d", &num);

        if (num >= 0) {
            if (num % 2 == 0) {
                if (num > par_maior) {
                    par_maior = num;
                }
                conta_par = 1;
            } else {
                if (num < impar_menor) {
                    impar_menor = num;
                }
                conta_impar = 1;
            }
        }

    } while (num >= 0);

    printf("\nNÚMERO NEGATIVO RECEBIDO = ALGORITMO ENCERRADO!\n");

    if (conta_par == 1) {
        printf("MAIOR NUMERO PAR RECEBIDO = %d\n", par_maior);
    } else {
        printf("NENHUM NÚMERO PAR RECEBIDO\n");
    }

    if (conta_impar == 1) {
        printf("MENOR NUMERO IMPAR RECEBIDO = %d\n", impar_menor);
    } else {
        printf("NENHUM NUMERO IMPAR RECEBIDO\n");
    }

    return 0;
}
```

---

## 🖥️ Sample Execution

```
Digite um numero
5
Digite um numero
12
Digite um numero
3
Digite um numero
8
Digite um numero
-1

NÚMERO NEGATIVO RECEBIDO = ALGORITMO ENCERRADO!
MAIOR NUMERO PAR RECEBIDO = 12
MENOR NUMERO IMPAR RECEBIDO = 3
```

---

## ⚠️ Edge Cases Handled

| Situation | Behavior |
|---|---|
| No even number entered | Displays "NENHUM NÚMERO PAR RECEBIDO" |
| No odd number entered | Displays "NENHUM NUMERO IMPAR RECEBIDO" |
| Negative number entered | Exits loop without processing |
| Zero entered | Treated as a valid even number |

---

## 🛠️ How to Compile and Run

```bash
gcc 4.c -o largest_even
./largest_even
```

---

*Developed as a C programming exercise — UESC, 1st semester.*
