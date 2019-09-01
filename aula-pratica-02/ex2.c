#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n)
{
    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
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

