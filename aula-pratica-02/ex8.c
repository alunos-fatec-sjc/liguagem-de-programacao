#include<stdio.h>
#include<stdbool.h>

bool eh_par(int a)
{
    return a % 2 == 0
}

int main()
{
    int x;
    scanf("%d", &x);
    if(eh_par(x)) {
        printf("%d eh par\n", x);
    }
    else {
        printf("%d eh impar\n", x);
    }
    return 0;
}
