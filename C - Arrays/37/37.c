#include <stdio.h>
#include <stdlib.h>

int distanciaalfabeto(char A, char B)
{
    int tt;
    if(A > B){
        tt = A - B;
    } else if(B > A){
        tt = B - A;
    } else if(A == B){
        return 0;
    }

    return tt;
}

int main()
{
    char letra1;
    char letra2;
    int dist;

    printf("Digite uma letra:\n");
    scanf("%c", &letra1);
    printf("Digite outra letra:\n");
    scanf(" %c", &letra2);
    
    dist = distanciaalfabeto(letra1, letra2);
    printf("A distancia entre as duas letras: %d caracteres.\n", dist);

    return 0;
}
