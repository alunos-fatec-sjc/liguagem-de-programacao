/*
    Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, 
    na ordem, os tempos registrados em cada volta. Fazer um programa em
    C para ler os tempos das N voltas, calcular e imprimir:
        a. melhor tempo;
        b. a volta em que o melhor tempo ocorreu;
        c. tempo médio das N voltas;
*/

#include<stdio.h>

int find_menor(int *voltas, int n) {
    int menor = voltas[0];
    for(int i = 1; i < n; i++) {
        if(voltas[i] < menor)
            menor = voltas[i];
    }
    return menor;
}

int menor_volta(int *voltas, int menor, int n) {
    for(int i = 0; i < n; i++) {
        if(voltas[i] == menor) {
            return i + 1;
        }
    }
}

int media(int *voltas, int n) {
    int soma = 0;
    for(int i  = 0; i < n; i++) {
        soma += voltas[i];
    }
    return soma / n;
}

int main()
{
    int n;
    printf("Digite o numero de voltas: ");
    scanf("%d", &n);
    int voltas[n];

    for(int i  = 0; i < n; i++) {
        printf("Digite o tempo de uma volta: ");
        scanf("%d", &voltas[i]);
    }
    int menor = find_menor(voltas, n);
    printf("Melhor tempo: %d\n", menor);
    printf("Melhor volta: %d\n", menor_volta(voltas, menor, n));
    printf("Media das voltas: %d", media(voltas, n));

    return 0;
}
