#include <stdio.h>
#include <stdlib.h>

int comparar(char p1[20], char p2[20])
{
    int soma1 = 0;
    int soma2 = 0;
    int i = 0;

    while(p1[soma1] != '\0'){
        soma1++;
    }

    while(p2[soma2] != '\0'){
        soma2++;
    }

    if(soma1 > soma2){
        return 1;
    } 
    if(soma1 < soma2){
        return -1;
    }

    while(p1[i] != '\0'){
        if(p1[i] != p2[i]){
            return 2;
        }
        i++;
    }

    return 0;
}

int main()
{
    char palavra1[20];
    char palavra2[20];
    printf("Você vai digitar duas palavras e eu vou dizer a maior:\n");
    printf("Digite a primeira palavra:\n"); scanf("%s", palavra1);
    printf("Digite a segunda palavra:\n"); scanf(" %s", palavra2);

    int comp = comparar(palavra1, palavra2);
    if(comp == 0){
        printf("As duas palavras são idênticas --> 0");
    } else if(comp == 1){
        printf("A primeira palavra eh maior --> 1");
    } else if(comp == -1){
        printf("A segunda palavra eh maior --> -1");
    } else{
        printf("As duas palavras tem a mesma quantia de caracteres mas sao diferentes --> 2");
    }
    
}
