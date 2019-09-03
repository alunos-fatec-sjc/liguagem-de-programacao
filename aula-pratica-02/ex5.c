/*
    Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
    Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
*/

#include<stdio.h>

int fatorial(int n)
{
    if(n == 1) {
        return 1;
    }
    else {
        return n * fatorial(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Fatorial de %d: %d", n, fatorial(n));
    return 0;
}
