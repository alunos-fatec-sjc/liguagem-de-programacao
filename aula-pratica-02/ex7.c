/*
    Faça 3 funções:
    • ler: - uma função que receba dois número inteiro positivo n;
    • multiplicar: - que multiplique os números recebidos na função ler;
    • imprimir: - que imprima o resultado da função multiplicar.
*/

#include<stdio.h>

int ler()
{
    int a, b;
    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    return mult(a, b);
}

int mult(int a, int b)
{
    return imprimir(a * b);
}

int imprimir(int a)
{
    printf("Resultado: %d\n", a);
    return 0;
}

int main()
{
    ler();
    return 0;
}
