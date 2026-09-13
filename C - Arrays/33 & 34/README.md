# Count Even and Odd Elements Using Pointers

## Description

The program receives an array of integers and counts how many elements are even and how many are odd.

The counts are updated inside a function using pointers.

## Solution

The `verificapar()` function receives the array, its size, and the addresses of the two counters: `soma_par` and `soma_impar`.

For each element, the program uses the modulo operator `%` to determine whether it is even or odd.

* If `vet[i] % 2 == 0`, the value pointed to by `soma_par` is increased.
* Otherwise, the value pointed to by `soma_impar` is increased.

The pointers allow the function to modify the variables `pares` and `impares` directly inside `main()`.

The key part is:

```c
(*soma_par)++;
(*soma_impar)++;
```

The `*` dereferences the pointer, allowing the original variable to be modified.

### Steps

1. A vector with 10 elements is created.
2. The user fills the vector.
3. `verificapar()` checks each element.
4. Even numbers increment `pares`.
5. Odd numbers increment `impares`.
6. The final counts are displayed.

## Concepts Used

* Functions
* Arrays
* Pointers
* Dereferencing
* Passing variables by address
* `for` loops
* Modulo operator `%`
* Conditional statements

## Code

```c
    #include <stdio.h>
    #include <stdlib.h>

    //estou pesquisando sobre ponteiros e quando vi a questao achei que seria interessante testar

    void verificapar(int n, int vet[n], int *soma_par, int *soma_impar) 
    {
        for(int i = 0; i < n; i++){
            if((vet[i] % 2) == 0){
                (*soma_par)++;
            } else{
                (*soma_impar)++;
            }
        }
    }

    int main()
    {
        int tam = 10; // fique a vontade para modificar
        int vet[tam];
        int pares = 0;
        int impares = 0;

        printf("Preencha o vetor:\n");
        for(int i = 0; i < tam; i++){
            scanf("%d", &vet[i]);
        }
        printf("\n--------------");

        printf("\nO vetor:\n");
        for(int i = 0; i < tam; i++){
            printf("%d ", vet[i]);
        }

        verificapar(tam, vet, &pares, &impares);
        printf("\nO vetor possui %d elementos pares e %d elementos impares.\n", pares, impares);
    }
```
