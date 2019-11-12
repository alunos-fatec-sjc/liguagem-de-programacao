/*
    Elaborar um algoritmo que auxilie no controle de uma fazenda de gado que possuí um
    total de 2000 cabeças de gado. A base de dados é formada por um conjunto de 
    estruturas (registros) contendo os seguintes campos referentes a cada cabeça de gado: 
        código: código da cabeça de gado; 
        leite: número de litros de leite produzido por semana; 
        alim: quantidade de alimento ingerida por semana - em quilos; 
        nasc: data de nascimento - mês e ano; 
        abate: ‘N' (não) ou ‘S’ (sim). 
    O campo nasc. é do tipo struct data que por sua vez, possui dois campos: 
        mês 
        ano 
    Elaborar funções para: 
        a) Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas. 
        b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso: 
            tenha mais de 5 anos, ou; 
            produza menos de 40 litros de leite por semana, ou; 
            produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de 
            alimento por dia. 
        c) Crie o menu de opções para: 
            c1.Devolver a quantidade total de leite produzida por semana na fazenda. 
            c2. Devolver a quantidade total de alimento consumido por semana na fazenda. 
            c3.Devolver a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate. 
            c4. Devolver a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate 
            c5. Devolver número de cabeças de gado que iram para o abate. 
            c6. Sair do programa. 
*/

#include<stdio.h>
#include<string.h>

struct data_nascimento {
    int mes;
    int ano;
};

struct registro {
    long codigo;
    int leite;
    float alim;
    struct data_nascimento data;
    char abate[2];
};

struct registro registros[3];

void preencher_registros()
{
    for(int i = 0; i < 3; i++) {
      printf("Digite o código do gado %d: ", i + 1);
      scanf("%ld", &registros[i].codigo);
      printf("Digite a quantidade de leite do gado %d: ", i + 1);
      scanf("%d", &registros[i].leite);
      printf("Digite a quantidade de alimentos do gado %d: ", i + 1);
      scanf("%f", &registros[i].alim);
      printf("Data de nascimento\n");
      printf("Digite o mes: ");
      scanf("%d", &registros[i].data.mes);
      printf("Digite o ano: ");
      scanf("%d", &registros[i].data.ano);
    }
}

void preencher_abate()
{
    for (int i = 0; i < 3; i++) {
      int cond1, cond2, cond3;
      cond1 = 2019 - registros[i].data.ano > 5;
      cond2 = registros[i].leite < 40;
      cond3 = registros[i].leite > 50 && registros[i].leite < 70 && registros[i].alim > 50;
      if(cond1 || cond2 || cond3){
          strcpy(registros[i].abate, "S");
      } else {
          strcpy(registros[i].abate, "N");
      }
    }

}

int calc_total_leite()
{
    int total = 0;
    for(int i = 0; i < 3; i++) {
        total += registros[i].leite;
    }
    return total;

}

float calc_total_alim()
{
    float total = 0;
    for(int i = 0; i < 3; i++) {
        total += registros[i].alim;
    }
    return total;
}

int leite_apos_abate()
{
    int total = 0; 
    for(int i = 0; i < 3; i++) {
        if(strcmp(registros[i].abate, "N") == 0) {
	    total += registros[i].leite;
	}
    }
    return total;
}

float alim_apos_abate()
{
    float total = 0;
    for(int i = 0; i < 3; i++) {
        if(strcmp(registros[i].abate, "N") == 0){
	   total += registros[i].alim;
	}
    }
    return total;
}

int num_abates()
{
    int total = 0;
    for(int i = 0; i < 3; i++){
        if(strcmp(registros[i].abate, "S") == 0) {
	    total++;
	}
    }
    return total;
}

int main()
{
    preencher_registros();
    preencher_abate();
    int escolha;
    do
    {
        printf("\t Selecione uma opção\n");
	printf("1 - Quantidade total de leite na semana\n");
	printf("2 - Quantidade total de alimento na semana\n");
	printf("3 - Quantidade total de leite após o abate\n");
	printf("4 - Quantidade total de alimento após o abate\n");
        printf("5 - Número de gados que irão para o abate\n");
	printf("0 - Sair\n");
	printf("\nOpção: ");
	scanf("%d", &escolha);

	switch(escolha) {
	    case 1:
                printf("Total de leite na semana: %d\n", calc_total_leite());
		break;
	    case 2:
                printf("Total de alimento na semana: %.1f\n", calc_total_alim());
	        break;
	    case 3:
	        printf("Total de leite após o abate: %d\n", leite_apos_abate());
	        break;
	    case 4:
		printf("Total de alimento após o abate: %.1f\n", alim_apos_abate());
	       break;
            case 5:
	        printf("Total de abates: %d\n", num_abates());
		break;
	    default:
		break;
	}
    } while(escolha != 0);
    printf("Fim do Programa\n");
    return 0;
}
