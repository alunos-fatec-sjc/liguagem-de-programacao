#include<stdio.h>

int main()
{
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Sequencia na ordem inversa:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
    return 1;
}
