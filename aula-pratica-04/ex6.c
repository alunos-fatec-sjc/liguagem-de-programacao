/*
    Faça uma função que leia uma string de 50 posições digitada por um usuário,
    e retorne valor 1 se for um palíndromo ou 0 em caso negativo.
    Um palíndromo é uma palavra, frase ou qualquer outra sequência que tenha
    a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda
    para a direita sem que se altere seu significado 
    (4334 e arara são exemplos de palíndromos).
*/

#include<stdio.h>
#include<string.h>

int eh_palindrome(char str[50]) {
    int size = strlen(str) - 1;
    char str_reversa[size - 1];
    for(int i = size; i >= 0; i--) {
        if(str[size - i] != str[i]){
            return 0;
        }
        str_reversa[size - i] = str[i];
    }
    return 1;
}

int main() 
{
    char str[50];
    printf("Digite uma palavra: ");
    scanf("%s", &str);

    if(eh_palindrome(str)) {
        printf("A palavra é palíndrome!");
    }
    else {
        printf("A palavra não é palíndrome!");
    }
    return 0;
}
