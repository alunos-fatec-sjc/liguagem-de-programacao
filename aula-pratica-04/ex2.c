/*
    Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e 
    com 0 os demais elementos. Escreva ao final a matriz obtida.
*/

#include<stdio.h>

int main()
{
    int matriz[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            (j == i) ? matriz[i][i] = 1 : matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
