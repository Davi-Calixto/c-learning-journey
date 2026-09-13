#include <stdio.h>
 
int main() {
    
    int num;
    int soma = 0;

    do{
        printf("Digite um numero:\n");
        scanf("%d", &num);
        
        if (num >= 0)
           soma += num;
        
    }while(num >= 0);
    
    printf("NUMERO NEGATIVO DIGITADO -> ALGORITMO ENCERRADO\n");
    printf("---------------------------------------------------\n");
    printf("A soma dos numeros positivos digitados eh: %d \n", soma);

    return 0;
}