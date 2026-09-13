#include <stdio.h>
 
int main() {
 
    int cod, cod2;
    float valor, valor2, qnt_pecas, qnt_pecas2, total;
    scanf("%d %f %f\n", &cod, &qnt_pecas, &valor);
    scanf("%d %f %f", &cod2, &qnt_pecas2, &valor2);
    total = (valor * qnt_pecas) + (valor2 * qnt_pecas2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}