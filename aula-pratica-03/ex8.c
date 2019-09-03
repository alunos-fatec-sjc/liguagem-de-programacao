/*
    Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. 
    Faça um programa em C que calcule o produto escalar P de A por B. (
    Isto é, P =A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).
*/

#include<stdio.h>

int main()
{
    int m[10], n[10], soma = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero para o vetor m: ");
        scanf("%d", &m[i]);
        printf("Digite um numero para o vetor n: ");
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 10; i++) {
        soma += (m[i] * n[i]);
    }

    printf("Produto escalar de m por n: %d\n", soma);
    return 0;
}
