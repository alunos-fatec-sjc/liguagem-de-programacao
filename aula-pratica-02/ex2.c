#include<stdio.h>
#include<stdlib.h>
int primo(int n);

bool is_prime(int n)
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
    scanf("%d", &n);
    for(int i = 2; cont < n; i++){
        if(primo(i) == 1){
            soma += i;
            cont++;
        }
    }
    printf("Soma dos %d primeiro números primos: %d", n, soma);
    return 1;
}

