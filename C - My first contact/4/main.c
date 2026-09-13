#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Digite primeiro valor numerico\n\n");
    scanf("%d", &a);

    printf("Digite o segundo valor numerico\n\n");
    scanf("%d", &b);

    if(a == b){
        int s = a + b;
        printf("Como os valores sao iguais, sua soma resulta em %d\n\n", s);

    } else{
        int s = a * b;
        printf("Como os valores sao diferentes, sua multiplicacao resulta em %d\n\n", s);

    }

    return 0;
}
