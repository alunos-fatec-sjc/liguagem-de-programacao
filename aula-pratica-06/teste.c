#include<stdio.h>

int numeros[8] = {2, 3, 2, 3, 2, 3, 2, 3};

int numOcorrenciasElemento(int elem, int index)
{
    int num = 0;
    for(int i = index; i < 8; i++) {
        if(numeros[i] == elem) {
            num++;
        }
    }
    return num;
}

int totalElemsDiferentes()
{
    int total = 0;
    for(int i = 0; i < 8; i++) {
        if(numOcorrenciasElemento(numeros[i], i) == 1) {
            total++;
        }
    }
    return total;
}

int main()
{
    printf("%d\n", totalElemsDiferentes());
    return 0;
}
