#include <stdio.h>
 
int main() {
 
    int total, resto;
    scanf("%d", &total);
    printf("%d\n", total); 
    
    int n100 = total / 100;
    resto = total % 100;
    printf("%d nota(s) de R$ 100,00\n", n100);

    int n50 = resto / 50;
    resto = resto % 50;
    printf("%d nota(s) de R$ 50,00\n", n50);

    int n20 = resto / 20;
    resto = resto % 20;
    printf("%d nota(s) de R$ 20,00\n", n20);

    int n10 = resto / 10;
    resto = resto % 10;
    printf("%d nota(s) de R$ 10,00\n", n10);

    int n5 = resto / 5;
    resto = resto % 5;
    printf("%d nota(s) de R$ 5,00\n", n5);
    
    int n2 = resto / 2;
    resto = resto % 2;
    printf("%d nota(s) de R$ 2,00\n", n2);

    int n1 = resto / 1;
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}