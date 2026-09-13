# Count Repeated Grades

## Description

The program receives the grades of a group of students and counts how many times each grade appears.

The grades are assumed to be integers from `0` to `100`.

## Solution

The program uses a second array, `repetidos`, as a frequency table.

The `preenche()` function initializes every position of `repetidos` with `-1`. This value is used to indicate that a grade has not appeared yet.

The `notas_repetidas()` function then goes through all grades. The grade itself is used as an index of the frequency array:

```text
repetidos[v1[i]]++;
```

For example, if the grade is `7`, position `repetidos[7]` is incremented.

Because the array starts with `-1`, the first occurrence changes the value to `0`, the second to `1`, and so on. Therefore, `1` is added when displaying the result to obtain the actual number of occurrences.

### Steps

1. An array stores the students' grades.
2. A frequency array with positions from `0` to `100` is created.
3. The frequency array is initialized with `-1`.
4. Each grade is used as an index in the frequency array.
5. The corresponding counter is incremented.
6. The program displays every grade that appeared and its frequency.

## Concepts Used

* Arrays
* Functions
* Frequency tables
* Array indexing
* `for` loops
* Counting occurrences
* Using values as array indexes

## Code

```c
#include <stdio.h>
#include <stdlib.h>

void notas_repetidas(int v1[], int qtde, int v2[])
{
    for(int i = 0; i < qtde; i++){
        v2[v1[i]]++;
    }
}

void preenche(int vetor[])
{
    for(int i = 0; i < (100 + 1); i++){
        vetor[i] = -1;
    }
}

int main()
{
    int qtde_alunos = 10; // altere a vontade
    int notas[qtde_alunos];
    int repetidos[100 + 1]; // se fosse tam seria tam + 1, eu poderia colocar 101 mas assim fica mais intuitivo
    int qtde_reps;
    preenche(repetidos);
    

    printf("Digite as notas:\n");

    for(int i = 0; i < qtde_alunos; i++){
        printf("Nota %d: ", i);
        scanf("%d", &notas[i]);
    }
    notas_repetidas(notas, qtde_alunos, repetidos);

    for(int i = 0; i < (100 + 1); i++){
        if(repetidos[i] >= 0){
            printf("A nota %d apareceu %d vezes.\n", i, repetidos[i] + 1);
        }
    }
    
    return 0;
}

```
