    #include <stdio.h>
    #include <stdlib.h>

    int is_palindrome(int tam, char m[tam][tam])
    {
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam; j++){
                if(m[i][j] != m[tam - 1 - i][tam - 1 - j]){
                    return 0;
                }
            }
        }

        return 1;
    }

    int main()
    {
        int tam = 5;
        char matriz[tam][tam];
        int palindromo;

        printf("Preencha a matriz de caracteres:\n");
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam;j++){
                scanf(" %c", &matriz[i][j]);
            }
        }

        printf("Matriz Gerada:\n");
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam;j++){
                printf("%c", matriz[i][j]);
            }
            printf("\n");
        }

        palindromo = is_palindrome(tam, matriz);
        if(palindromo == 0){
            printf("A matriz nao eh um palindromo!\n");
        } else{
            printf("A matriz eh um palindromo!\n");
        }

    }
