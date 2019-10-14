/*
    Faça um programa que solicite um número (inteiro/positivo)
     e imprima esse número e o seu endereço de memória (por meio de um ponteiro).
*/

#include<stdio.h>

int main()
{
    int num, *ptr;
    printf("Digite um número: ");
    scanf("%d", &num);
    ptr = &num;
    printf("Número digitado: %d\n", *ptr);
    printf("Endereço: %x\n", ptr);
    return 0;
}