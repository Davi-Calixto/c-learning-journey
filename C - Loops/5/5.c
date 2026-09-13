#include <stdio.h>
 
int main() {
    
    int num;
    int tabuada = 0;
    int contador = 1;
    printf("Digite um numero\n");
    scanf("%d", &num);


    printf("A tabuada do numero %d corresponde a:\n\n", num);

    while(contador <= 10){
        tabuada = num * contador;
        printf("%d x %d = %d\n", num, contador, tabuada);
        contador++;
    }
    
    
    return 0;
}