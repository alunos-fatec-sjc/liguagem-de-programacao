/*
    Dado um vetor de 5 posições contendo 0 ou 1(base binária), transformá-lo para a base decimal. 
    Criar uma função que recebe esse vetor e retorne o número (base decimal).
    Protótipo da função: int transforma_binario_decimal(int vetor[5])
*/

#include<stdio.h>

int bin_to_dec(int vetor[5]) {
    int base = 1, result = 0;
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
