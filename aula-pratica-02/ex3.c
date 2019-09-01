#include<stdio.h>

int conta_divisores(int n)
{
    int cont = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            cont++;
    }
    return cont;
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d possui %d divisores", n, conta_divisores(n));
    return 0;
}
