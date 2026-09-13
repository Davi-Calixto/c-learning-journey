# Generate Numbers Excluding Multiples of 7

## Description

The program generates the first 100 numbers that are neither multiples of `7` nor numbers ending in `7`.

After generating them, it displays only the odd numbers from the resulting array.

## Solution

The `seven()` function fills the array with valid numbers.

A `while` loop keeps generating numbers starting from `0`. For each number, two conditions are checked:

* `num % 7 != 0` ensures the number is not divisible by `7`.
* `num % 10 != 7` ensures the number does not end in `7`.

If both conditions are true, the number is stored in the array and the index `i` is increased.

After the array is filled, `main()` goes through the elements and uses `arr[i] % 2 != 0` to print only the odd numbers.

### Steps

1. A 100-element array is created.
2. Numbers are generated starting from `0`.
3. Multiples of `7` and numbers ending in `7` are ignored.
4. The first 100 valid numbers are stored in the array.
5. The program checks which stored numbers are odd.
6. The odd numbers are displayed.

## Concepts Used

* Functions
* Arrays
* `while` loops
* Conditional statements
* Modulo operator `%`
* Filtering values
* Generating values with specific conditions

## Code

```c
#include <stdio.h>
#include <stdlib.h>

void seven(int tam, int arr[tam])
{
    int i = 0; int num = 0;
    
    while(i < 100){
        if(num % 7 != 0 && num % 10 != 7){
            arr[i] = num;
            i++;
        }
        num++;
    }
}

int main()
{
    int tam = 100;
    int arr[tam];

    seven(tam, arr);

    for(int i = 0; i < tam; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}
```
