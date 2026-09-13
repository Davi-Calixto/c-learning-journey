#include <stdio.h>
 
int main() {
 
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int maiorAB = (A + B + abs(A - B)) / 2;
    int maiorC = (maiorAB + C + abs(maiorAB - C)) / 2;
    printf("%d eh o maior\n", maiorC);
    

    return 0;
}