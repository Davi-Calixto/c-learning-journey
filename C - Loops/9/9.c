#include <stdio.h>

int main() {

    int num;
    int contador = 1;
    int contapar = 0;
    int contaimpar = 0;
    do{
       printf("DIGITE UM NUMERO\n");
       scanf("%d", &num);

       if((num % 2) == 0){
        printf("%d eh par\n", num);
        contapar++;
       } else{
        printf("%d eh impar\n", num);
        contaimpar++;
       }
       contador++;

    }while(contador <= 200);
    printf("NUMEROS PARES RECEBIDOS - %d\n", contapar);
    printf("NUMEROS IMPARES RECEBIDOS - %d\n", contaimpar);

    return 0;
}