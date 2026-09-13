#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 3; 
    int matriz[tam][tam];
    int soma_acima;
    int soma_abaixo;

    printf("Preencha a Matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d, %d: ", i, j); scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz preenchida:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    soma_acima = soma_acima_diag_prin(tam, matriz);
    printf("A soma dos elementos acima da diagonal principal: %d", soma_acima);

    soma_abaixo = soma_abaixo_diag_prin(tam, matriz);
    printf("\nA soma dos elementos abaixo da diagonal principal: %d", soma_abaixo);
}
