# Pattern Series Generator

A C program that generates N terms of a repeating pattern series.

## Problem

Given the series:

```
1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...
```

Generate the first N terms, where N is provided by the user.

## How to Compile and run

```bash
gcc 17.c -o n_terms_pattern
./n_terms_pattern
```

## Example Usage

```
Digite o valor de N: 12
1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7
```

```
Digite o valor de N: 7
1, 4, 4, 2, 5, 5, 3
```

## Pattern Explanation

The series is organized in groups of 3 terms:

| Group | Terms     |
|-------|-----------|
| 1     | 1, 4, 4   |
| 2     | 2, 5, 5   |
| 3     | 3, 6, 6   |
| 4     | 4, 7, 7   |

- 1st term of each group → group number
- 2nd and 3rd terms → group number + 3

## Implementation Notes

- Loop runs from `i = 0` to `i < N`, one iteration per term
- Group number is computed as `(i / 3) + 1` using integer division
- `i % 3 == 0` identifies the 1st term of each group
- Handles any N, including non-multiples of 3
