#include <stdio.h>
 
int main() {
 
    int num;
    float horas, vph;
    scanf("%d %f %f", &num, &horas, &vph);
    float salario = horas * vph;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salario);

 
    return 0;
}