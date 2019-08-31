#include<stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int x;
    printf("Digite o numero de termos: ");
    scanf("%d", &x);
    for(int i = 0; i <= x; i++)
        printf("%d\n", fibonacci(i));
    return 1;
}
