/*
    Dada uma sequência de n números reais, determinar o número de vezes que cada um deles ocorre na mesma.
    Exemplo: n = 8
    Seqüência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7
    Saída: -1.7 ocorre 3 vezes
            3.0 ocorre  1 vez
                0.0 ocorre  2 vezes
               1.5 ocorre 1 vez
               2.3 ocorre 1 vez
*/

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
    return 0;
}
