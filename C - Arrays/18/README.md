# Find Common Elements Between Two Arrays

## Description

The program receives two arrays and finds the elements that appear in both of them.

The common elements are stored in a third array and then displayed.

## Solution

The `intersect()` function receives the two arrays, their sizes, and an array to store the results.

It uses two nested `for` loops:

* The first loop goes through the elements of `vetorA`.
* The second loop compares each element of `vetorA` with every element of `vetorB`.

When two elements are equal, the value is copied to `result`, and the `temp` counter is increased.

The function returns `temp`, which represents the number of common elements found.

For example:

`A = [1, 2, 3, 4]`

`B = [3, 4, 5, 6]`

Result:

`[3, 4]`

### Steps

1. The user enters the size and values of the first array.
2. The user enters the size and values of the second array.
3. Each element of the first array is compared with every element of the second.
4. When equal values are found, they are stored in the result array.
5. The number of results is returned.
6. The common elements are displayed.

## Concepts Used

* Functions
* Arrays
* Nested `for` loops
* Array indexing
* Comparing elements from different arrays
* Storing results in a third array
* Counters

## Code

```c
#include <stdio.h>

int intersect(int sizeA, int vetorA[], int vetorB[], int sizeB, int result[])
{
    int temp = 0;
    for(int i = 0; i < sizeA; i++){
        for(int j = 0; j < sizeB; j++){
            if(vetorA[i] == vetorB[j]){
                result[temp] = vetorA[i];
                temp++;
            }
        }
    }

    return temp;
}

int main() 
{
    int sizeA;
    int sizeB;
    int var;

    printf("Type vectorA size: "); scanf("%d", &sizeA); 

    int vetorA[sizeA];
    int result;

    for(int i = 0; i < sizeA; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetorA[i]);
        printf("\n-------------\n");
    }
//////////////////////////////
    printf("Type vectorB size: "); scanf("%d", &sizeB); 

    int vetorB[sizeB];

    for(int i = 0; i < sizeB; i++)
    {
        printf("Type number %d\n", i + 1);
        scanf("%d", &vetorB[i]);
        printf("\n-------------\n");
    }
////////////////////////////////
    int vetorC[sizeA + sizeB];
    result = intersect(sizeA, vetorA, vetorB, sizeB, vetorC);

    printf("Common elements in the two vectors:\n");

    for(int i = 0; i < result; i++){
        printf("%d\n", vetorC[i]);
    }

}
```
