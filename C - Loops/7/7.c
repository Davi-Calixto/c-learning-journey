#include <stdio.h>

int calc_cubo(int a){
    return a * a *  a;

}
 
int main() {

    int contador = 1;
    int num;

    do{
        printf("Digite um número\n");
        scanf("%d", &num);
        int cubo = calc_cubo(num);
        printf("%d\n", cubo);
        contador++;

    }while(contador <= 10);
    
    return 0;
}