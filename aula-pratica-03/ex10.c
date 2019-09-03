/*
    Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição, 
    com os valores subsequentes do vetor. 
    Dessa forma todos “zeros” devem ficar para as posições finais do vetor.
*/

#include<stdio.h>

int main()
{
    int vetor[10], num, index_z = 9, index = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        vetor[(num == 0) ? index_z-- : index++] = num ;
     }

    for(int i  = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

