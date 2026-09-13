    #include <stdio.h>
    #include <stdlib.h>

    //estou pesquisando sobre ponteiros e quando vi a questao achei que seria interessante testar

    void verificapar(int n, int vet[n], int *soma_par, int *soma_impar) 
    {
        for(int i = 0; i < n; i++){
            if((vet[i] % 2) == 0){
                (*soma_par)++;
            } else{
                (*soma_impar)++;
            }
        }
    }

    int main()
    {
        int tam = 10; // fique a vontade para modificar
        int vet[tam];
        int pares = 0;
        int impares = 0;

        printf("Preencha o vetor:\n");
        for(int i = 0; i < tam; i++){
            scanf("%d", &vet[i]);
        }
        printf("\n--------------");

        printf("\nO vetor:\n");
        for(int i = 0; i < tam; i++){
            printf("%d ", vet[i]);
        }

        verificapar(tam, vet, &pares, &impares);
        printf("\nO vetor possui %d elementos pares e %d elementos impares.\n", pares, impares);
    }
