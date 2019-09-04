/*
    Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna XZ. 
    (sem utilizar funções prontas)
*/

#include<stdio.h>

int exp(int x, int z)
{
    if(z == 1) {
        return x;
    }
    z--;
    return x * exp(x, z);
}

int main()
{
    int a, b;
    printf("Digite a base: ");
    scanf("%d", &a);
    printf("Digite o expoente: ");
    scanf("%d", &b);
    printf("%d elevado a %d: %d", a, b, exp(a, b));
    return 0;
}
