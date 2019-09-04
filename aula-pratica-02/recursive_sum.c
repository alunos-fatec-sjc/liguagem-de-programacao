/*
    Esse exercício faz parte da parte B.
*/

#include<stdio.h>

int soma(int a)
{
    if(a != 0)
        return a + soma(a - 1);
    return a;
}

int main()
{
   int x;
   printf("Digite um numero: ");
   scanf("%d", &x);
   printf("Soma dos %d primeiros numeros naturais: %d\n", x, soma(x));
   return 0;
}
