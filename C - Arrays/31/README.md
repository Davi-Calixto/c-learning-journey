# Check if a Character Matrix Is a Palindrome

## Description

The program creates a `5 × 5` character matrix and checks whether it forms a palindrome when read symmetrically from opposite positions.

## Solution

The `is_palindrome()` function compares each element of the matrix with its corresponding element from the opposite side.

The position:

```text
m[i][j]
```

is compared with:

```text
m[tam - 1 - i][tam - 1 - j]
```

This mirrors both the row and column, creating a 180° rotation of the matrix.

If any pair of corresponding characters is different, the function immediately returns `0`.

If all positions match, it returns `1`, meaning the matrix is a palindrome.

For example:

```text
A B C
B D B
C B A
```

is a palindrome because every character matches its mirrored position.

### Steps

1. A `5 × 5` character matrix is created.
2. The user fills the matrix with characters.
3. Each position is compared with its mirrored position.
4. If a mismatch is found, `0` is returned.
5. If all positions match, `1` is returned.
6. The result is displayed.

## Concepts Used

* Two-dimensional arrays
* Character arrays
* Functions
* Nested `for` loops
* Matrix indexing
* Symmetric comparison
* Early `return`

## Code

```c
    #include <stdio.h>
    #include <stdlib.h>

    int is_palindrome(int tam, char m[tam][tam])
    {
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam; j++){
                if(m[i][j] != m[tam - 1 - i][tam - 1 - j]){
                    return 0;
                }
            }
        }

        return 1;
    }

    int main()
    {
        int tam = 5;
        char matriz[tam][tam];
        int palindromo;

        printf("Preencha a matriz de caracteres:\n");
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam;j++){
                scanf(" %c", &matriz[i][j]);
            }
        }

        printf("Matriz Gerada:\n");
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam;j++){
                printf("%c", matriz[i][j]);
            }
            printf("\n");
        }

        palindromo = is_palindrome(tam, matriz);
        if(palindromo == 0){
            printf("A matriz nao eh um palindromo!\n");
        } else{
            printf("A matriz eh um palindromo!\n");
        }

    }

```
