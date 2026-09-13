#include <stdio.h>

int main() {
    
    float sal = 0;
    int sal150 = 0;
    float salmaior = 0;
    int filhos = 0;
    int somafilhos = 0;
    float mediafilhos;
    int hab = 0;
    float mediasalario;
    float saltotal = 0;
    float ate150;

    printf("DIGITE --> SALARIO\n");
    scanf("%f", &sal);

    while(sal > 0){
        saltotal += sal;
        if(sal <= 150){
            sal150++;
        }

        if(sal > salmaior){
            salmaior = sal;
        }

        printf("DIGITE --> NUMERO DE FILHOS\n");
        scanf("%d", &filhos);

        hab++;

        somafilhos += filhos;
        
        printf("DIGITE --> SALARIO\n");
        scanf("%f", &sal);
    }

    mediafilhos = (float)somafilhos / (float)hab;
    mediasalario = saltotal / (float)hab;
    ate150 = (sal150 / (float)hab) * 100;

    printf("MAIOR SALARIO --> %.2f", salmaior);
    printf("MEDIA SALARIAL --> %.2f", mediasalario);
    printf("PORCENTAGEM QUE RECEBE ATE 150 --> %.2f%%", ate150);


    return 0;
}