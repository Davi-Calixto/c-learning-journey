#include <stdio.h>
 
int main() {
 
    char nome[10];
    double salario;
    double vendas;
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    double total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}