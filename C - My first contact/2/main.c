#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um numero\n");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("O numero %d eh par", a);
    } else {
        printf("O numero %d nao eh par", a);
    }

    return 0;
}
