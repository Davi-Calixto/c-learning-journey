#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float soma = 0;
    float mediatotal;
    float qtdehomens = 0;
    float qtdemulheres = 0;
    float mediahomens;
    float mediamulheres;
    float somahomens = 0;
    float somamulheres = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Digite seu sexo: (M/F)\n");
        scanf(" %c", &sexo);

        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        if(sexo == 'M' || sexo == 'm'){
           qtdehomens++;
           somahomens += idade;
        } else if(sexo == 'F' || sexo == 'f'){
           qtdemulheres++;
           somamulheres += idade;
        }
           

        soma += (float)idade;
    }
     
    mediatotal = (soma / 7.0);
    mediahomens = (qtdehomens > 0) ? (somahomens / qtdehomens) : 0;
    mediamulheres = (qtdemulheres > 0) ? (somamulheres / qtdemulheres) : 0;

    printf("Idade media do grupo: %.2f\n", mediatotal);
    printf("Idade media dos homens: %.2f\n", mediahomens);
    printf("Idade media das mulheres: %.2f\n", mediamulheres);

    return 0;
}