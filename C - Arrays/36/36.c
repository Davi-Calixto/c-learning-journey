#include <stdio.h>
#include <stdlib.h>

int removerespaco(char algo[50])
{
    int total = 0;
    int temp;
    for(int i = 0; algo[i] != '\0'; i++){
        if(algo[i] == ' '){
            for(int j = i; algo[j] != '\0'; j++){
                temp = algo[j];
                algo[j] = algo[j + 1];
                algo[j + 1] = temp;
                if(algo[j] == '\0'){
                    break;
                }
            }
            total++;
            i--;
        }
    }

    return total;
}

int main()
{
    char frase[50];

    printf("Digite uma frase:\n");
    gets(frase);
    
    int tt = removerespaco(frase);
    printf("Foram removidos %d espacos em branco.\n", tt);
    printf("A frase sem espacos em branco:\n%s", frase);

    return 0;
}
