#include <stdio.h>
 
int main() {
 
    int dias;
    scanf("%d", &dias);

    int anos = dias / 365;
    int resto = dias % 365;

    int mes = resto / 30;
    int d = resto  % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, mes, d);

    return 0;
}