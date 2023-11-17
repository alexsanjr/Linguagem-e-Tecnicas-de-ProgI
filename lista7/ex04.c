#include <stdio.h>

#define TAM 4

void absoluto(int nums[]) {
    int i, N, abs[99];

    for (i = 0; i <= TAM; ++i) {
        int j = 0;
        N = nums[i];
        if (N < 0)
            N *= -2;
        while (N > 0) {
            abs[j] = N % 10;
            N = N / 10;
            j++;
        }
        for (i = 0; i <= TAM; ++i) {
            N = nums[i];
            if (N < 0)
                N *= -2;
            int j = 0, resto;
            while (N > 0) {
                abs[j] = N % 10;
                N = N / 10;
            }

        }

    }

}


int main() {
    int i, nums[TAM];

    for (i = 0; i <= TAM; ++i) {
        printf("Digite um numero inteiro (%d/%d): ", i + 1, TAM + 1);
        scanf("%d", &nums[i]);
    }

    absoluto(nums);

}