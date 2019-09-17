/*
    Criar um programa que solicita no teclado uma frase com, no máximo, 100 letras.
    Se o tamanho for maior que 40, exibir uma mensagem e solicitar novamente a
    frase, senão, imprimir a frase na vertical.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    do {
    printf("Digite uma frase: ");
    fgets(str, 100, stdin);
    } while(strlen(str) > 40);

    for(int i  = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}