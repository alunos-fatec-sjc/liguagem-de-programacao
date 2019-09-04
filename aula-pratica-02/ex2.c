/*
    Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.
*/

#include<stdio.h>
int is_prime(int n)
{
    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, soma = 0, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 2; cont < n; i++){
        if(is_prime(i)){
            soma += i;
            cont++;
        }
    }
    printf("Soma dos %d primeiro números primos: %d\n", n, soma);
    return 0;
}
