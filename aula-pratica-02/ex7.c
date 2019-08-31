#include<stdio.h>
int ler();
int mult(int a, int b);
int imprimir(int a);

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
    printf("Resultado: %d", a);
    return 1;
}

int main()
{
    ler();
    return 1;
}
