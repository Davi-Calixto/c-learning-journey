#include <stdio.h>
 
int main() {
 
    double A, B, C, NA, NB, NC, MEDIA;
    A = 2.0;
    B = 3.0;
    C = 5.0;
    scanf("%lf %lf %lf", &NA, &NB, &NC);
    MEDIA = ((NA * A) + (NB * B) + (NC * C)) / (A + B + C);
    printf("MEDIA = %.1lf\n", MEDIA);

 
    return 0;
}