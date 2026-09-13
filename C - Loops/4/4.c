#include <stdio.h>
 
int main() {

     int num;
     int par_maior = 0;
     int impar_menor = 1000000;
     int conta_par = 0;
     int conta_impar = 0;

     do{
        printf("Digite um numero\n");
        scanf("%d", &num);
        
        if(num >= 0){
           if((num % 2 == 0)){
               if (num > par_maior){
                   par_maior = num;
               }
               conta_par = 1;
           } else{
               if(num < impar_menor){
                   impar_menor = num;
               }
        
            conta_impar = 1;
           }
        }

     }while(num >= 0);
    
     printf("\nNÚMERO NEGATIVO RECEBIDO = ALGORITMO ENCERRADO!\n");
     if(conta_par == 1){
         printf("MAIOR NUMERO PAR RECEBIDO = %d\n", par_maior);
     } else{
        printf("NENHUM NÚMERO PAR RECEBIDO\n");
     }
     
     if(conta_impar == 1){
        printf("MENOR NUMERO IMPAR RECEBIDO = %d\n", impar_menor);
     } else{
        printf("NENHUM NUMERO IMPAR RECEBIDO\n");
     }
    

    return 0;
}