#include<stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];
    for(int i = 0; i < n; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < n; i++) {
        int cont = 1;
        for(int j = 0; j < n; j++) {
            if(vetor[i] == vetor[j] && (i != j)) {
                cont++;
            }
        }
        printf("%.1f ocorre %d vez(es)\n", vetor[i], cont);
    }
    return 1;
}
