#include <stdio.h>
#include <stdlib.h>

int soma_diagprinc(int tam, int m[tam][tam]) // soma dos elementos da diagonal principal
{
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += m[i][i];
    }
    return soma;
}

int soma_diagsec(int tam, int m[tam][tam]) // soma dos elementos da diagonal secundária
{
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += m[i][tam - 1 - i]; 
    }
    return soma;
}

int main()
{
    int tam = 8;
    int matriz[tam][tam];
    int s_diagprin;
    int s_diagsec;

    printf("Preencha a matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d, %d --> ", i, j); 
            scanf("%d", &matriz[i][j]);     
        }
    }
    
    printf("Matriz original:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);     
        }
        printf("\n");
    }
    s_diagprin = soma_diagprinc(tam, matriz);
    s_diagsec = soma_diagsec(tam, matriz);

    printf("Soma da diagonal principal: %d\n", s_diagprin);
    printf("Soma da diagonal secundária: %d\n", s_diagsec);
}
