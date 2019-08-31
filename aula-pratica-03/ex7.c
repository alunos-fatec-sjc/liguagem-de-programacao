#include<stdio.h>

int main()
{
    int a[5], b[8];

    for(int i = 0; i < 5; i++) {
        printf("Digite um numero para o vetor a: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 8; i++) {
        printf("Digite um numero para o vetor b: ");
        scanf("%d", &b[i]);
    }

    for(int i  = 0; i < 5; i++) {
        for(int j = 0; j < 8; j++) {
            if(a[i] == b[j]){
                printf("%d\n", a[i]);
                break;
            }
        }
    }
    return 1;
}
