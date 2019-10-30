/*
    8. Crie a função chamada Concatena (char *str_destino, char *str_origem) usando ponteiros.
    Regras: - Concatena duas strings. A string de origem permanecerá inalterada e será anexada ao fim da string de destino.
    Obs: não é permitido utilizar strcat.  (Faça o principal também-> O usuário deverá digitar duas strings que serão 
    passadas por parâmetros para função concatena). 
*/

#include<stdio.h>

void concatena(char *str_destino, char *str_origem)
{
    int i, j;
    for(i = 0; str_origem[i] != '\n'; i++);

    for(j = 0; str_destino[j] != '\0'; ++j, ++i) {
        str_destino[i] = str_origem[j];
    }
    str_destino[i] = '\0';
}

int main()
{
    char str1[50], str2[50];
    printf("Digite a primeira string: ");
    fgets(str1, 50, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 50, stdin);

    concatena(str1, str2);
    printf("Concatenação: ");
    puts(str2);
    return 0;
}
