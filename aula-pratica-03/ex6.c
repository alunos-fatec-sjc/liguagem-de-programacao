#include<stdio.h>

int main()
{
    int vetor[10], x;
    for(int j = 0; j < 10; j++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[j]);
    }

    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        if (x == vetor[i]){
            printf("O numero foi encontrado na posicao [%d] do vetor\n", i);
            return 0;
        }
    }
    printf("O numero nao foi encontrado no vetor\n");
    return 1;
}
