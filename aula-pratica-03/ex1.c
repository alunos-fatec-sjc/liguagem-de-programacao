#include<stdio.h>

int main()
{
    int vetor[20], index = 0, soma = 0, num;

    printf("-----Parte A-----\n");
    for(int i = 0; i < 20; i++) {
        printf("Numero para o vetor[%d]: ", i);
        scanf("%d", &num);
        if(num % 2 == 0) {
            vetor[index] = num;
            soma += vetor[index];
            index++;
        }
    }

    printf("-----Parte B-----\n");
    int maior = 0;
    for(int i = 0; i < index; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("Maior valor encontrado: %d\n", maior);

    int media = soma / index;
    printf("Media dos valores: %d\n", media);

    return 0;
}
