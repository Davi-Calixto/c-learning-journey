# Compare Two Words

## Description

The program receives two words and compares them based on their length and their characters.

It returns:

* `1` if the first word is longer.
* `-1` if the second word is longer.
* `2` if both have the same length but contain different characters.
* `0` if the two words are identical.

## Solution

The `comparar()` function first calculates the length of both words by iterating through each string until `'\0'`, which marks the end of a C string.

The lengths are compared first:

* If the first word is longer, the function returns `1`.
* If the second word is longer, it returns `-1`.

If both words have the same length, the function compares their characters one by one.

If any character is different, it returns `2`. If all characters are equal, it returns `0`.

### Steps

1. The user enters two words.
2. The length of each word is calculated.
3. The lengths are compared.
4. If the lengths are equal, the characters are compared one by one.
5. A value from `-1` to `2` is returned depending on the result.
6. The result is displayed.

## Concepts Used

* Strings
* Character arrays
* `while` loops
* String termination with `'\0'`
* Character comparison
* Functions
* Return values

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int comparar(char p1[20], char p2[20])
{
    int soma1 = 0;
    int soma2 = 0;
    int i = 0;

    while(p1[soma1] != '\0'){
        soma1++;
    }

    while(p2[soma2] != '\0'){
        soma2++;
    }

    if(soma1 > soma2){
        return 1;
    } 
    if(soma1 < soma2){
        return -1;
    }

    while(p1[i] != '\0'){
        if(p1[i] != p2[i]){
            return 2;
        }
        i++;
    }

    return 0;
}

int main()
{
    char palavra1[20];
    char palavra2[20];
    printf("Você vai digitar duas palavras e eu vou dizer a maior:\n");
    printf("Digite a primeira palavra:\n"); scanf("%s", palavra1);
    printf("Digite a segunda palavra:\n"); scanf(" %s", palavra2);

    int comp = comparar(palavra1, palavra2);
    if(comp == 0){
        printf("As duas palavras são idênticas --> 0");
    } else if(comp == 1){
        printf("A primeira palavra eh maior --> 1");
    } else if(comp == -1){
        printf("A segunda palavra eh maior --> -1");
    } else{
        printf("As duas palavras tem a mesma quantia de caracteres mas sao diferentes --> 2");
    }
    
}

```
