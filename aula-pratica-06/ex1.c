/*
    Seja uma estrutura para descrever os carros de uma determinada revendedora,
    contendo os seguintes campos: 
        marca: string de tamanho 15 
        ano: inteiro 
        cor: string de tamanho 10 
        preço: real 
    a) Escrever a definição da estrutura carro. 
    b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 5 e global. 
    c) Crie um menu para: 
        c1. Definir uma função para ler o vetor vetcarros. 
        c2. Definir uma função que receba um preço e imprima os carros (marca, cor e ano)
            que tenham preço igual ou menor ao preço recebido. 
        c3. Defina uma função que leia a marca de um carro e imprima as informações de todos
            os carros dessa marca (preço, ano e cor). 
        c4. Defina uma função que leia uma marca, ano e cor e informe se existe ou não um carro com
            essas características. Se existir, informar o preço. 
        c5. Sair do programa. 
*/

#include<stdio.h>
#include<string.h>

struct carro {
    char marca[15];
    int ano;
    char cor[10];
    float preco;
};

struct carro carros[20];

void imprimirCarro(struct carro car)
{
    printf("\nMarca: %s\n", car.marca);
    printf("Ano: %d\n", car.ano);
    printf("Cor: %s\n", car.cor);
    printf("Preço: %.2f\n", car.preco);
}

void popularVetorCarros() {
    for(int i = 0; i < 20; i++) {
        printf("\nDigite a marca do carro %d: ", i + 1);
        scanf("%s", &carros[i].marca);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite a cor do carro %d: ", i + 1);
        scanf("%s", &carros[i].cor);
        printf("Digite o preço do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }
}

void imprimirCarrosComPrecoMenorOuIgualQue(float preco) {
    for(int i = 0; i < 20; i++) {
        if (carros[i].preco <= preco) {
            imprimirCarro(carros[i]);
        }
    }
}

void printCarrosPorMarca() {
    char marca[15];
    printf("Informe a marca: ");
    scanf("%s", &marca);
    for(int i = 0; i < 20; i++) {
        if (strcmp(carros[i].marca, marca) == 0) {
            imprimirCarro(carros[i]);
        }
    }
}

void existeCarroCom(char marca[15], int ano, char cor[10]) {
    for(int i = 0; i < 20; i++) {
        if(strcmp(carros[i].marca, marca) == 0 && carros[i].ano == ano && strcmp(carros[i].cor, cor) == 0) {
            printf("Carro encontrado!\nPreço: %.2f\n", carros[i].preco);
        }
    }
}

int main()
{
    int escolha;
    do {
        printf("\n\t ESCOLHA UMA OPÇÃO\n");
        printf("1 - Popular o vetor de carros.\n");
        printf("2 - Buscar carros com preço menor ou igual que.\n");
        printf("3 - Imprimir carros por marca.\n");
        printf("4 - Buscar carro por marca, ano e cor e imprimir o preço.\n");
        printf("0 - Sair.\n");
        printf("\nDigite a escolha: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                popularVetorCarros();
                break;

            case 2 :{
                float preco;
                printf("Digite o preço: ");
                scanf("%f", &preco);
                imprimirCarrosComPrecoMenorOuIgualQue(preco);
                break;
            }

            case 3:
                printCarrosPorMarca();
                break;

            case 4: {
                char marca[15], cor[10];
                int ano;
                printf("Digite uma marca: ");
                scanf("%s", &marca);
                printf("Digite um ano: ");
                scanf("%d", &ano);
                printf("Digite uma cor: ");
                scanf("%s", &cor);
                existeCarroCom(marca, ano, cor);
                break;
            }

            default:
				printf("Escolha inválida!\n");
                break;

        }
    } while(escolha != 0);

    printf("Fim do programa");
    return 0;
}
