# Find the Second Largest Value

## Description

The program asks the user for the size of an array, stores the values entered, and finds the second largest value.

## Solution

The `second()` function starts by comparing the first two elements to determine the largest and second largest values.

After that, a `for` loop checks the remaining elements.

* If an element is greater than the current largest value, the previous largest value becomes the second largest.
* Otherwise, if the element is greater than the current second largest and different from the largest, it becomes the new second largest.

At the end, the function returns the second largest value.

For example:

`[10, 25, 7, 40, 18]` → largest = `40` → second largest = `25`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The first two values are compared to initialize the largest and second largest values.
4. The remaining elements are checked one by one.
5. The largest and second largest values are updated when necessary.
6. The second largest value is returned and displayed.

## Concepts Used

* Functions
* Arrays
* `for` loops
* Conditional statements
* Variable swapping
* Tracking the two largest values

## Code

```c
#include <stdio.h>

int second(int size, int vetor[])
{
  int bigger = vetor[0];
  int second = vetor[1];

  if(second > bigger)
  {
    int temp = bigger;
    bigger = second;
    second = temp;
  }

  for(int i = 2; i < size; i++)
    {
      if(vetor[i] > bigger)
      {
        second = bigger;
        bigger = vetor[i];
      }
      else if(vetor[i] > second && vetor[i] != bigger)
      {
        second = vetor[i];
      }
  }

  return second;
}


int main() 
{
    int size;
    int result;

    printf("Type vector size: "); scanf("%d", &size);

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    result = second(size, vetor);

    printf("The second largest value: %d", result);

    return 0;
    
}
```
