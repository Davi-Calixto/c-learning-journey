#include <stdio.h>
#include <stdlib.h>

void notas_repetidas(int v1[], int qtde, int v2[])
{
    for(int i = 0; i < qtde; i++){
        v2[v1[i]]++;
    }
}

void preenche(int vetor[])
{
    for(int i = 0; i < (100 + 1); i++){
        vetor[i] = -1;
    }
}

int main()
{
    int qtde_alunos = 10; // altere a vontade
    int notas[qtde_alunos];
    int repetidos[100 + 1]; // se fosse tam seria tam + 1, eu poderia colocar 101 mas assim fica mais intuitivo
    int qtde_reps;
    preenche(repetidos);
    

    printf("Digite as notas:\n");

    for(int i = 0; i < qtde_alunos; i++){
        printf("Nota %d: ", i);
        scanf("%d", &notas[i]);
    }
    notas_repetidas(notas, qtde_alunos, repetidos);

    for(int i = 0; i < (100 + 1); i++){
        if(repetidos[i] >= 0){
            printf("A nota %d apareceu %d vezes.\n", i, repetidos[i] + 1);
        }
    }
    
    return 0;
}
