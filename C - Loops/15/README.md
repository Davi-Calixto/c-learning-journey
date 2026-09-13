# Number List — Positive and Negative Sums

A C program that reads a list of positive and negative numbers and computes partial and total sums.

## Problem

Read a list of positive or negative numbers terminated by zero. The program must output:

- Sum of all positive numbers
- Sum of all negative numbers
- Total sum (positive sum + negative sum)

## How to Compile and run

```bash
gcc 15.c -o pos_neg_total
./pos_neg_total
```

## Example Usage

```
TYPE A NUMBER
3
TYPE A NUMBER
-1
TYPE A NUMBER
7
TYPE A NUMBER
-4
TYPE A NUMBER
0

POSITIVE NUMBERS SUM --> 10
NEGATIVE NUMBERS SUM --> -5
TOTAL SUM --> 5
```

## Implementation Notes

- Uses a **sentinel-controlled while loop** — input ends when 0 is entered
- Uses the **anticipatory read pattern** — number is read before the loop and again at the end of each iteration
- Zero is never accumulated in either sum
- Total sum is computed after the loop as `posnum + negnum`
