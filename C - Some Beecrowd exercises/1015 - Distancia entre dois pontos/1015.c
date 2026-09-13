#include <stdio.h>
#include <math.h>
 
int main() {
 
    float P1[2];
    float P2[2];
    scanf("%f %f", &P1[0], &P1[1]);
    scanf("%f %f", &P2[0], &P2[1]);
    float A = pow((P2[0] - P1[0]), 2);
    float B = pow((P2[1] - P1[1]), 2); 
    float total = sqrt(A + B);
    printf("%.4f\n", total);

    return 0;
}