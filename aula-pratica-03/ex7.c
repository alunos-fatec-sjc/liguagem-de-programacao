/*
    Dado dois vetores, A (5 elementos) e B (8 elementos), 
    faça um programa em C que imprima todos os elementos comuns aos dois vetores.
*/

#include<stdio.h>

int main()
{
    int a[5], b[8];

    for(int i = 0; i < 5; i++) {
        printf("criar vetor a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 8; i++) {
        printf("criar vetor b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    for(int i  = 0; i < 5; i++) {
        for(int j = 0; j < 8; j++) {
            if(a[i] == b[j]){
                printf("%d\n", a[i]);
                break;
            }
        }
    }
    return 0;
}
