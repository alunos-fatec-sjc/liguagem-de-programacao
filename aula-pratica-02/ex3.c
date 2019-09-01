#include<stdio.h>
int n_divisores(int n);

int counta_divisores(int n)
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
    scanf("%d", &n);
    printf("%d possui %d divisores", n, n_divisores(n));
    return 1;
}
