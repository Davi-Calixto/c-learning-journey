#include <stdio.h>
 
int main() {

    int num;
    int soma_par = 0;
    int soma_impar = 0;
    int contador_par = 0;
    int contador_impar = 0;
    float media_par;
    float media_impar;
    char resposta = 'n';

    do
    {
      printf("Digite um número: ");
      scanf("%d", &num);

      if((num % 2) == 0){
        soma_par += num;
        contador_par++;
      } else{
        soma_impar += num;
        contador_impar++;
      }
      
       printf("Deseja continuar?(S/N)\n\n");
       scanf(" %c", &resposta);
        
    } while (resposta == 's' || resposta == 'S');

    printf("----------------------------------\n");

    if(contador_par != 0){
        media_par = (float)soma_par / contador_par;
        printf("Media dos numeros pares: %.2f\n", media_par);
    } else{
        printf("Nenhum numero par digitado!\n");
    }

    if(contador_impar != 0){
        media_impar = (float)soma_impar / contador_impar;
        printf("Media dos numeros impares: %.2f\n", media_impar);
    } else{ 
        printf("Nenhum numero impar digitado!\n");
    }
    
    return 0;
}