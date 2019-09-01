#include<stdio.h>

int bin_to_dec(int vetor[5]) {
    int base = 1, q = 0, result = 0;
    for(int index = 5; index >= 0; index--) {
        result += vetor[index] * base;
        base *= 2;
    }
    return result;
}

int main()
{
    int vetor[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite 0 ou 1: ");
        scanf("%d", &vetor[i]);
    }
    printf("Resultado em decimal: %d\n", bin_to_dec(vetor[5]));
    return 0;
}
