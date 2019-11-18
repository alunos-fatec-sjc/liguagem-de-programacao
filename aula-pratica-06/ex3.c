#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct produto {
    char nome[15];
    char setor[2];
    int quant;
    float preco;
};

struct produto estoque[100];

void preencherEstoque()
{
    char nome[15], setor[2];
    for(int i = 0; i < 100; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(nome, 15, stdin);
        strcpy(estoque[i].nome, nome);
        printf("Digite o setor do produto %d: ", i + 1);
        fgets(setor, 2, stdin);
        strcpy(estoque[i].setor, setor);
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i].quant);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf(" %f",&estoque[i].preco);
        setbuf(stdin, NULL); // limpando o buffer do teclado....
    }
}

int numOcorrenciasDoProduto(char nome[15], int index)
{
    int count = 0;
    for(int i = index; i < 100; i++) {
        if(strcmp(nome, estoque[i].nome) == 0) {
            count++;
        }
    }
    return count;
}

int numProdutosDiferentesNoSetor(char setor[2])
{
    int count = 0;
    for(int i = 0; i < 100; i++) {
        if(strcmp(estoque[i].setor, setor) == 0 && numOcorrenciasDoProduto(estoque[i].nome, i) == 1) {
            count++;
        }
    }
    return count;
}

float capitalTotal()
{
    float total = 0;
    for(int i = 0; i < 100; i++) {
        total += estoque[i].preco * estoque[i].quant;
    }
    return total;
}

int main()
{
    int escolha;
    char setor[2];
    preencherEstoque();
    do
    {
        printf("\n\tSelecione uma opção\n");
        printf("1 - Número de produtos diferentes no setor\n");
        printf("2 - Capital total investido\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                printf("Digite o setor: ");
                scanf("%s", &setor);
                printf("Total produtos diferentes no setor %s: %d\n", setor, numProdutosDiferentesNoSetor(setor));
                break;
            case 2:
                printf("%.2f", capitalTotal());
                break;
            case 0:
                break;
            default:
                printf("Escolha inválida!\n");
                break;
        }

    } while (escolha != 0);
    printf("Fim do programa\n");
    return 0;
}