#include<stdio.h>
int eh_par(int a);

int eh_par(int a)
{
    if(a % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    if(eh_par(x) == 1)
        printf("%d eh par", x);
    else
        printf("%d eh impar", x);
    return 1;
}
