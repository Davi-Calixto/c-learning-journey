# Calculate the Distance Between Two Letters

## Description

The program receives two letters and calculates the numerical distance between them in the character set.

## Solution

The `distanciaalfabeto()` function receives two characters and compares their numerical values.

Characters in C are represented internally by integer values, so subtracting their values gives the distance between them.

The function checks which character has the greater value and subtracts the smaller value from it.

If both characters are equal, the function returns `0`.

For example:

`'a'` and `'f'` → `5`

`'z'` and `'c'` → `23`

### Steps

1. The user enters two letters.
2. The letters are passed to `distanciaalfabeto()`.
3. Their numerical values are compared.
4. The smaller value is subtracted from the larger value.
5. The resulting distance is returned and displayed.

## Concepts Used

* Characters
* Character representation
* Functions
* Comparison operators
* Subtraction
* Return values

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int distanciaalfabeto(char A, char B)
{
    int tt;
    if(A > B){
        tt = A - B;
    } else if(B > A){
        tt = B - A;
    } else if(A == B){
        return 0;
    }

    return tt;
}

int main()
{
    char letra1;
    char letra2;
    int dist;

    printf("Digite uma letra:\n");
    scanf("%c", &letra1);
    printf("Digite outra letra:\n");
    scanf(" %c", &letra2);
    
    dist = distanciaalfabeto(letra1, letra2);
    printf("A distancia entre as duas letras: %d caracteres.\n", dist);

    return 0;
}

```
