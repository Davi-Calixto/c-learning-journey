#include <stdio.h>
 
int main() {
 
    int segundos;
    scanf("%d", &segundos);

    int h = segundos / 3600;
    int resto = segundos % 3600;

    int m = resto / 60;
    int s = resto  % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}