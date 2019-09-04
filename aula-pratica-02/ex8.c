/*
    Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é par e 0 se n é impar.
*/

#include<stdio.h>

int eh_par(int a)
{
    return a % 2 == 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    if(eh_par(x)) {
        printf("%d eh par\n", x);
    }
    else {
        printf("%d eh impar\n", x);
    }
    return 0;
}
