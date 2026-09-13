#include <stdio.h>
 
int main() {
 
    double A = 3.5;
    double B = 7.5;
    double NA;
    double NB;
    double MEDIA;

    scanf("%lf\n%lf", &NA, &NB);
    MEDIA = ((NA * A) + (NB * B)) / (A + B);
    printf("MEDIA = %.5lf\n", MEDIA);
    
 
    return 0;
}