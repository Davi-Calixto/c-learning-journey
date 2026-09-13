# Square Number Series

A C program that generates a series of perfect squares up to the N-th term.

## Problem

Given the series:

```
1, 4, 9, 16, 25, 36, ...
```

Generate the series up to the N-th term, where N is provided by the user.

## How to Compile and run

```bash
gcc 16.c -o n_term_sequence
./n_term_sequence
```

## Example Usage

```
TYPE THE N-TERM OF SEQUENCE-> 6
1 -> 1 term
4 -> 2 term
9 -> 3 term
16 -> 4 term
25 -> 5 term
36 -> 6 term
```

## Implementation Notes

- Each term at position `i` is equal to `i²`
- Uses a `for` loop from 1 to N, computing `i * i` at each step
