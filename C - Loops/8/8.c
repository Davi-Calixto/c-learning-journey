#include <stdio.h>

int main() {
    int num;
    int contador = 1;

     printf("Digite um numero\n");
     scanf("%d", &num);

    do{
      if((contador % 3) == 0 && (contador % 5) ==0){
        printf("%d\n", contador);
      }
      contador++;

    }while(contador <= num);

    return 0;
}