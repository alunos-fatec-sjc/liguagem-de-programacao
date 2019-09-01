#include<stdio.h>

int primo(int n)
{
    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            printf("%d não é número primo", n);
            return 0;
        }
    }
    printf("%d é um número primo", n);
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    primo(n);
    return 1;
}
