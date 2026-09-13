#include <stdio.h>
 
int main() {

    int num; 
    int contador = 0;

    do{
       printf("Digite um numero: ");
       scanf("%d", &num);
       contador++;

    }while (num > 0);

    printf("Voce digitou um numero negativo. Conta encerrada\n");
    printf("--------------------------\n");
    printf("Voce digitou %d numeros\n", contador);

    return 0;
}