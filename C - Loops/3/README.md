# Average of Even and Odd Numbers

A C program that reads integers entered by the user and calculates separately the average of all even numbers and all odd numbers provided.

## Description

The algorithm uses a `do-while` loop to continuously receive numbers until the user chooses to stop.

For each number entered:

- If it is even, it is added to the even sum and its counter is incremented.
- If it is odd, it is added to the odd sum and its counter is incremented.

At the end, the program calculates and displays:

- Average of even numbers
- Average of odd numbers

It also handles cases where no even or no odd numbers were entered, avoiding division by zero.

## Example

```text
Enter a number: 4
Continue? (S/N)
S

Enter a number: 7
Continue? (S/N)
S

Enter a number: 10
Continue? (S/N)
N

----------------------------------
Average of even numbers: 7.00
Average of odd numbers: 7.00
```

## Logic breakdown

- `do-while` ensures at least one number is read.
- `if (num % 2 == 0)` checks whether the number is even.
- `else` handles odd numbers.
- Two accumulators store the sums:
  - `soma_par`
  - `soma_impar`
- Two counters track quantities:
  - `contador_par`
  - `contador_impar`
- A division-by-zero check prevents invalid averages.
- `scanf(" %c", &resposta)` uses a leading space to ignore leftover newline characters in the input buffer.

## Code

```c
#include <stdio.h>
 
int main() {

    int num;
    int soma_par = 0;
    int soma_impar = 0;
    int contador_par = 0;
    int contador_impar = 0;
    float media_par;
    float media_impar;
    char resposta = 'n';

    do
    {
      printf("Digite um número: ");
      scanf("%d", &num);

      if((num % 2) == 0){
        soma_par += num;
        contador_par++;
      } else{
        soma_impar += num;
        contador_impar++;
      }
      
       printf("Deseja continuar?(S/N)\n\n");
       scanf(" %c", &resposta);
        
    } while (resposta == 's' || resposta == 'S');

    printf("----------------------------------\n");

    if(contador_par != 0){
        media_par = (float)soma_par / contador_par;
        printf("Media dos numeros pares: %.2f\n", media_par);
    } else{
        printf("Nenhum numero par digitado!\n");
    }

    if(contador_impar != 0){
        media_impar = (float)soma_impar / contador_impar;
        printf("Media dos numeros impares: %.2f\n", media_impar);
    } else{ 
        printf("Nenhum numero impar digitado!\n");
    }
    
    return 0;
}
```

## Build & Run

```bash
gcc 3.c -o average_even_odd
./average_even_odd
```

## Concepts covered

- `do-while` loop
- Conditional `if/else`
- Modulo operator `%`
- Accumulator pattern
- Counter pattern
- Average calculation
- Division by zero prevention
- Character input handling with `scanf`