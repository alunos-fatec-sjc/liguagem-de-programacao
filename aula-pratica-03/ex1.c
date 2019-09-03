/*
    Escreva um programa principal que:
a) Leia 20 números (vetor de inteiros ) a partir de valores digitados pelo usuário,
apenas armazene no vetor os números pares; Obs: não deixar posições vazias entre os elementos do vetor.
b) Imprima na tela a quantidade de valores armazenados no vetor(item a), 
o maior valor encontrado e também a média desses valores.
*/

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
    int maior = -32767;
    for(int i = 0; i < index; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    if (input <= 0) {
        return 0;
    }
    printf("Maior valor encontrado: %d\n", maior);

    int media = soma / index;
    printf("Media dos valores: %d\n", media);

    return 0;
}
