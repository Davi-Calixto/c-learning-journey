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




