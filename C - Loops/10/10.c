#include <stdio.h>

int main() {
    float num;
    int contador = 1;
    float soma = 0;

    printf("Digite um numero\n");
    scanf("%f", &num);
    
    while(contador <= num){
         soma += (1.0 / contador);
         contador++;
    }

    printf("Soma = %.2f\n", soma);

    return 0;
}