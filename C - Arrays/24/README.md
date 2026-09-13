# Array Operations: Sum, Product, Intersection, Union, and Difference

## Description

The program performs several operations on two arrays of 10 integers:

* Sum of corresponding elements
* Product of corresponding elements
* Intersection
* Union
* Difference between the two arrays

The results of each operation are stored in separate arrays and then displayed.

## Solution

The program uses different functions for each operation.

### Sum

The `soma()` function adds the elements at the same position in both arrays:

```text
z[i] = x[i] + y[i]
```

### Product

The `produto()` function multiplies the elements at the same position:

```text
z[i] = x[i] * y[i]
```

### Intersection

The `intersec()` function checks whether each element of `x` also exists in `y`.

Two nested loops are used to compare the elements. If a match is found, the value is added to the result array.

### Difference

The `diferenca()` function does the opposite of the intersection. It stores only the elements from `x` that are not found in `y`.

### Union

The `uniao()` function first copies all elements from `x` to the result array.

It then checks the elements of `y`. If an element from `y` does not exist in `x`, it is appended to the result.

The function returns the total number of elements stored in the union.

### Steps

1. Two arrays with 10 elements are filled by the user.
2. The corresponding elements are added and multiplied.
3. The common elements are found.
4. The elements that exist only in the first array are found.
5. The two arrays are combined while avoiding values from `y` that already exist in `x`.
6. All results are displayed.

## Concepts Used

* Functions
* Arrays
* Nested `for` loops
* Array indexing
* Searching
* Counters
* Element-by-element operations
* Set-like operations

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int diferenca(int tam, int x[tam], int y[tam], int z[tam]) 
{
    int i, j, achou = 1, contador = 0;
    for(i = 0; i < tam; i++){
        achou = 1;
        for(j = 0; j < tam; j++){
            if(y[j] == x[i]){
                achou = 0;
            }
        }
        if(achou == 1){
            z[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int intersec(int tam, int x[tam], int y[tam], int z[tam])
{
    int i, j, achou = 1, contador = 0;
    for(i = 0; i < tam; i++){
        achou = 1;
        for(j = 0; j < tam; j++){
            if(y[j] == x[i]){
                achou = 0;
            }
        }
        if(achou == 0){
            z[contador] = x[i];
            contador++;
        }
    }

    return contador;
}

int uniao(int tam, int x[tam], int y[tam], int z[tam * 2])
{
    int i, j, achou = 0, contador = 0;
    for(i = 0; i < tam; i++){
        z[i] = x[i];
    }

    for(i = 0; i < tam; i++){
        achou = 1;  // reseta toda vez antes do loop para evitar ambiguidades
        for(j = 0; j < tam; j++){
            if(x[j] == y[i]){
                achou = 0;
            }
        }
        if(achou == 1){
            z[tam + contador] = y[i]; // tam + 0, tam + 1, tam + 2 até --> tam * 2
            contador++;
        }
    }

    return tam + contador;
}

void soma(int tam, int x[tam], int y[tam], int z[tam])
{
    for(int i = 0; i < tam; i++){
        z[i] = x[i] + y[i];
    }
}

void produto(int tam, int x[tam], int y[tam], int z[tam])
{
    for(int i = 0; i < tam; i++){
        z[i] = x[i] * y[i];
    }
}

int main()
{
    int tam = 10;
    int arr[tam];
    int arr2[tam];

    int sum[tam];
    int multi[tam];
    int intersect[tam];
    int dif[tam];
    int unir[tam * 2];
    int c1, c2, c3;

    printf("PREENCHA V1:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    printf("PREENCHA V2:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr2[i]);
    }

    soma(tam, arr, arr2, sum);
    printf("A soma dos elementos de V1 + V2:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", sum[i]);
    }

    produto(tam, arr, arr2, multi);
    printf("O produto de todos os elementos de V1 * V2:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", multi[i]);
    }

    c1 = intersec(tam, arr, arr2, intersect);
    printf("\nA interseccao de V1 e V2:\n");
    for(int i = 0; i < c1; i++){
        printf("%d ", intersect[i]);
    }

    c2 = uniao(tam, arr, arr2, unir);
    printf("\nA unicao de V1 e V2:\n");
    for(int i = 0; i < c2; i++){
        printf("%d ", unir[i]);
    }

    c3 = diferenca(tam, arr, arr2, dif);
    printf("\nA diferenca entre V1 e V2:\n");
    for(int i = 0; i < c3; i++){
        printf("%d ", dif[i]);
    }

}
```
