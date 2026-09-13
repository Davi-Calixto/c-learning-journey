# Remove Spaces from a String

## Description

The program receives a sentence and removes all whitespace characters (`' '`), modifying the original string directly.

It also counts how many spaces were removed.

## Solution

The `removerespaco()` function goes through the string character by character.

When a space is found, a `for` loop shifts all characters after it one position to the left. This removes the space from the string.

The variable `total` counts how many spaces were removed.

After shifting the characters, `i--` is used so that the new character that moved into the current position is checked as well. This is important when there are consecutive spaces.

For example:

`"hello world test"` → `"helloworldtest"`

### Steps

1. The user enters a sentence.
2. The function searches for spaces.
3. When a space is found, the characters after it are shifted one position to the left.
4. The counter is increased.
5. The process continues until the end of the string.
6. The number of removed spaces and the modified string are displayed.

## Concepts Used

* Strings
* Character arrays
* `for` loops
* String termination with `'\0'`
* Character manipulation
* Shifting elements
* In-place modification
* Counters

## Code

```c
#include <stdio.h>
#include <stdlib.h>

int removerespaco(char algo[50])
{
    int total = 0;
    int temp;
    for(int i = 0; algo[i] != '\0'; i++){
        if(algo[i] == ' '){
            for(int j = i; algo[j] != '\0'; j++){
                temp = algo[j];
                algo[j] = algo[j + 1];
                algo[j + 1] = temp;
                if(algo[j] == '\0'){
                    break;
                }
            }
            total++;
            i--;
        }
    }

    return total;
}

int main()
{
    char frase[50];

    printf("Digite uma frase:\n");
    gets(frase);
    
    int tt = removerespaco(frase);
    printf("Foram removidos %d espacos em branco.\n", tt);
    printf("A frase sem espacos em branco:\n%s", frase);

    return 0;
}

```
