/*
    Sem usar as funções para manipulação de strings da biblioteca <string.h>,
    use a função gets() para armazenar seu nome na string nome[100] e:
    a. Informe o numero de caracteres do seu nome.
    b. Informe o numero de vogais, consoantes e espaços em branco do
    seu nome.
    c. Exiba seu nome sem vogais e espaços em branco.
    d. Substituir um caractere informado pelo usuário pelo caractere '*'.
*/

#include <stdio.h>

int num_caracteres(char nome[100]) {
    int num = 0;
    for(int i = 0; nome[i] != '\0'; i++) {
        if(nome[i] != ' ' && nome[i] != '\n') {
            num++;
        }
    }
    return num;
}

void num_vog_cons_esp(char nome[100]) {
    int vog = 0, cons = 0, esp = 0;
    for(int i = 0; nome[i] != '\0'; i++) {
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' ||
            nome[i] == 'o' || nome[i] == 'u') {
                vog++;
        } else if(nome[i] == ' ') {
            esp++;
        } else if(nome[i] != '\n'){
            cons++;
        }
    }
    printf("Vogais: %d\nConsoantes: %d\nEspaços em branco: %d\n", vog, cons, esp);
}

void subs_char(char nome[100], char x) {

    for(int i = 0; nome[i] != '\0'; i++) {
        if(nome[i] == x) {
            nome[i] = '*';
        }
    }
    printf("%s\n", nome);
}
  
int main()
{
    char nome[100];
    printf("Digite o seu nome: ");
    fgets(nome, 100, stdin);
    
    printf("Seu nome tem %d caracteres\n", num_caracteres(nome));

    num_vog_cons_esp(nome);

    char x;
    printf("Informe o caracter a ser substituido no nome: ");
    scanf("%c", &x);
    subs_char(nome, x);
    return 0;
}