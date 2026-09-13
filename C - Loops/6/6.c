#include <stdio.h>
 
int main() {

    int num = 1000;
    
    printf("TODOS OS NUMEROS ENTRE 1000 E 2000 QUE DIVIDIDOS POR 11 PRODUZEM RESTO IGUAL A 2:\n\n");

    while(num <= 2000){
        if((num % 11) == 2){
            printf("%d\n", num);
        }
        num++;
    }
    
    return 0;
}