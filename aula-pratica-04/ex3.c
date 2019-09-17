/*
    Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
    a. Imprima todos os elementos de uma linha informada pelo usuário.
    b. Imprima todos os elementos de uma coluna informada pelo usuário.
    c. Imprima a soma dos elementos de uma linha informada pelo usuário.
    d. Imprima a soma dos elementos de uma coluna informada pelo
        usuário.
    e. Imprima a matriz transposta.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_linha(int matriz[4][4]) {
    int linha;
    printf("Digite a linha a ser imprimida: ");
    scanf("%d", &linha);
    for(int i = 0; i < 4; i++) {
        printf("%d ", matriz[linha][i]);
    }
    printf("\n");
}

void print_coluna(int matriz[4][4]) {
    int coluna;
    printf("Digite a coluna a ser imprimida: ");
    scanf("%d", &coluna);
    for(int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][coluna]);
    }
    printf("\n");
}

void soma_linha(int matriz[4][4]) {
    int linha, soma = 0;
    printf("Digite a linha a ser somada: ");
    scanf("%d", &linha);
    for(int i = 0; i < 4; i++) {
        soma += matriz[linha][i];
    }
    printf("Soma das linhas: %d\n", soma);
}

void soma_coluna(int matriz[4][4]) {
    int coluna, soma = 0;
    printf("Digite a coluna a ser somada: ");
    scanf("%d", &coluna);
    for(int i = 0; i < 4; i++) {
        soma += matriz[i][coluna];
    }
    printf("Soma das colunas: %d\n", soma);
}


int main()
{
    int matriz[4][4];
    srand( (unsigned)time(NULL) );
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20;
        }
    }

    print_linha(matriz);
    print_coluna(matriz);

    soma_linha(matriz);
    soma_coluna(matriz);
    return 0;
}