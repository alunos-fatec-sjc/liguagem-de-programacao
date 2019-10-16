#include<stdio.h>
#include<string.h>

void concatena(char *str_destino, char *str_origem) {
    while(*str_destino != '\0') {
        *str_origem += *(str_destino++);
    }
}

int main()
{
    char str1[50], str2[50];
    printf("Digite a primeira string: ");
    fgets(str1, 50, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 50, stdin);

    int last_index_str2 = strlen(str2) - 1;
    concatena(str1, str2);
    printf("Concatenação: %s\n", str2);
    return 0;
}