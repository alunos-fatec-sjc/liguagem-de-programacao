#include<stdio.h>
#include<stdlib.h>
int primo(int n);

int primo(int n)
{
    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            printf("%d n�o � n�mero primo", n);
            return 0;
        }
    }
    printf("%d � um n�mero primo", n);
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    primo(n);
    return 1;
}
