#include<stdio.h>

int main()
{
    int vetor[8];
    for(int i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    int index = 4;
    for(int i = 0; i < 8; i++) {
        if(index > 7)
            index = 0;
        printf("%d\n", vetor[index]);
        index++;
    }
    return 1;
}
