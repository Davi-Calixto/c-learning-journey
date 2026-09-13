#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um numero\n");
    scanf("%d", &a);

    if(a % 2 == 0){
        a = a + 2;
        printf("%d", a);

    } else{
        a = a + 4;
        printf("%d", a);

    }

    return 0;
}
