#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int s;

    printf("Digite o valor de A\n");
    scanf("%d", &a);

    printf("Digite o valor de B\n");
    scanf("%d", &b);

    printf("Digite o valor de C\n");
    scanf("%d", &c);

    s = a + b;

    if(s < c){
            printf("O valor de %d (soma dos valores de %d e %d) eh menor que o valor de %d\n", s,a,b,c);

    } else if(s > c){
            printf("O valor de %d (soma dos valores de %d e %d) eh maior que o valor de %d\n", s,a,b,c);

    } else {
            printf("O valor de %d (soma dos valores de %d e %d) eh igual ao valor de %d\n", s,a,b,c);
    }

    return 0;
}

