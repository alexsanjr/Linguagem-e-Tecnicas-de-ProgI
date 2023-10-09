#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; ++i) {
        printf("Tabuada do %d:\n", i);
        for (int j = 1; j <= 10; ++j) {
            int result = i * j;
            printf("%d x %d = %d\n", i, j, result);
        }
        printf("\n");
    }

    return 0;
}