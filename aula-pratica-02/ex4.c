/*
    Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique se esses valores
    podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. 
    Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: 
    o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. 
    O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
    • o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
    • o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
    • o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include<stdio.h>

int triangulo(int x, int y, int z)
{
    if((x < y + z) && (y < x + z) && (z < y + x)) {
        if (x == y && y == z) {
            printf("O triângulo é equilátero");
        }
        else if (x != y && y != z && x != z) {
            printf("O triângulo é escaleno");
        }
        else {
            printf("O triângulo é isósceles");
        }
    }
    else {
        printf("Não é um triângulo");
        return 1;
    }
    return 0;
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    triangulo(a, b, c);
    return 0;
}
