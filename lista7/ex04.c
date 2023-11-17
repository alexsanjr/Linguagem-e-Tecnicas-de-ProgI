#include <stdio.h>

#define TAM 4

int absoluto(int num) {
    if (num < 0 )
        return num *= -1;
    else
        return  num;
}

int main() {
    int i, nums[TAM], abs[TAM];

    for (i = 0; i <= TAM; ++i) {
        printf("Digite um numero inteiro (%d/%d): ", i + 1, TAM + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i <= TAM; ++i)
        abs[i] = absoluto(nums[i]);


    for (i = 0; i <= TAM; ++i) {
        printf("O valor absoluto de %d eh: %d\n", nums[i], abs[i]);
    }




}