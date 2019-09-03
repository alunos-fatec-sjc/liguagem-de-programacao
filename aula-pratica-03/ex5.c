/*
    Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e versa. 
    Escreva ao final o vetor obtido.
*/

#include<stdio.h>

int main()
{
    int vetor[8], index = 4;
    for(int i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[index++]);
        if(index > 7) {
            index = 0;
        }
    }
    for(int i = 0; i < 8; i++) {
        printf("%d - ", vetor[i]);
    }
    return 0;
}
