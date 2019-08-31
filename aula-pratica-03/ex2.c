#include<stdio.h>
int bin_to_dec(int *vetor);

int bin_to_dec(int *vetor) {
    int base = 1, q = 0, result = 0, index = 4;
    for(int i = 0; i < 5; i++) {
        q = vetor[index] * base;
        result += q;
        base *= 2;
        index--;
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
    printf("Resultado em decimal: %d", bin_to_dec(vetor));
    return 1;
}
