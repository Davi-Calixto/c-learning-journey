#include <stdio.h>

int main() {

    int posnum = 0;
    int negnum = 0;
    int totalsum;
    int num;

    printf("TYPE A NUMBER\n");
    scanf("%d", &num);

    while(num != 0){

        if(num > 0){
            posnum += num;
        } else{
            negnum += num;
        }

        printf("TYPE A NUMBER\n");
        scanf("%d", &num);
    }

    totalsum = posnum + negnum;

    printf("POSITIVE NUMBERS SUM --> %d", posnum);
    printf("NEGATIVE NUMBERS SUM --> %d", negnum);
    printf("TOTAL SUM --> %d", totalsum);


    return 0;
}