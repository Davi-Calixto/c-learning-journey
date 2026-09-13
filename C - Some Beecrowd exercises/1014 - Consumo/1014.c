#include <stdio.h>
 
int main() {
 
    int A;
    float B;
    scanf("%d %f", &A, &B);
    printf("%.3f km/l\n", (float)A / B);
    

    return 0;
}