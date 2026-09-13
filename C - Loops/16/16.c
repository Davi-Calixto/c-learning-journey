#include <stdio.h>

int main() {

    int num;
    
    printf("TYPE THE N-TERM OF SEQUENCE-> ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%d -> %d term\n", i * i, i);
    }


    return 0;
}