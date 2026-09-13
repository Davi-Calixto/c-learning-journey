#include <stdio.h>

int main() {
    int N, i;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int grupo = (i / 3) + 1;

        if (i % 3 == 0) {
            printf("%d", grupo);
        } else {
            printf("%d", grupo + 3);
        }

        if (i < N - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
