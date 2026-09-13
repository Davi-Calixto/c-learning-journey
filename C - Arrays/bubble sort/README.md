# Sort an Array Using Bubble Sort

## Description

The program asks the user for the size of an array, stores the values entered, and sorts the array in ascending order using the **Bubble Sort** algorithm.

## Solution

The `bubble_sort()` function uses two nested `for` loops to compare neighboring elements.

If the current element is greater than the next one, the two values are swapped using a temporary variable.

After each pass through the array, the largest unsorted element moves to the end. This process is repeated until the entire array is sorted.

For example:

`[5, 2, 8, 1, 3]` → `[1, 2, 3, 5, 8]`

### Steps

1. The user enters the array size.
2. The program stores the values in the array.
3. The first loop controls the number of passes.
4. The second loop compares adjacent elements.
5. Larger elements are moved to the right through swaps.
6. The sorted array is displayed.

## Concepts Used

* Functions
* Arrays
* Nested `for` loops
* Bubble Sort
* Swapping values
* Array indexing
* Comparison operators

## Code

```c
#include <stdio.h>

void bubble_sort(int vetor[], int size)
{
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int size;
    printf("Type vector size: "); scanf("%d", &size); 

    int vetor[size];

    for(int i = 0; i < size; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetor[i]);
        printf("\n-------------\n");
    }

    bubble_sort(vetor, size);

    printf("Ordened vector:\n");

    for(int i = 0; i < size; i++){
        printf("%d ", vetor[i]);
    }

}
```
