# City Survey — Population Statistics

A C program that reads salary and number of children from city inhabitants and computes key statistics.

## Problem

A city hall conducted a survey collecting data on residents' salaries and number of children. The program calculates:

- Average salary
- Average number of children
- Highest salary
- Percentage of people earning up to R$ 150.00

Data entry ends when a negative salary is entered (sentinel value).

## How to Compile and run

```bash
gcc 14.c -o son_sallary_mean
./son_sallary_mean
```

## Example Usage

```
DIGITE --> SALARIO
100
DIGITE --> NUMERO DE FILHOS
2
DIGITE --> SALARIO
200
DIGITE --> NUMERO DE FILHOS
0
DIGITE --> SALARIO
-1

MAIOR SALARIO --> 200.00
MEDIA SALARIAL --> 150.00
MEDIA DE FILHOS --> 1.00
PORCENTAGEM QUE RECEBE ATE 150 --> 50.00%
```

## Implementation Notes

- Uses a **sentinel-controlled while loop** — input ends when salary < 0
- The salary is read **before** the loop (anticipatory read pattern) and again at the end of each iteration
- The negative sentinel value is never processed in the calculations
