#include<stdio.h>

int main()
{
    int m[10], n[10], soma = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero para o vetor m: ");
        scanf("%d", &m[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero para o vetor n: ");
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 10; i++)
        soma += (m[i] * n[i]);

    printf("Produto escalar de m por n: %d\n", soma);
    return 0;
}
