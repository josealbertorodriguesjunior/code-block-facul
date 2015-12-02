#include <stdio.h>
#include <stdlib.h>

struct lista{
    int numVoo, passageiros;
    char dataVoo[10], horaVoo[10], aeroportoS[50], aeroportoC[50], rota[50], tempoEstimado[10];
  struct lista *proximo;
};

typedef struct lista cadastro;

int menu (cadastro *conteudo){
    int opt;

	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Cadastrar um Novo Vôo\n");
	printf("2. Consultar Um Vôo\n");
	printf("Opcao: "); scanf("%d", &opt);

	switch(opt){
        case 0:
            exit(1);
            system("pause");
            break;
        case 1:
            cadastrarVoo(conteudo);
            break;
        case 2:
            consultaVoo(conteudo);
            break;
        default:
            printf("OPÇÃO INVÁLIDA");
	}

}

void cadastrarVoo(cadastro *conteudo){
    cadastro *novoEndereco = (cadastro *) malloc(sizeof(cadastro));
    printf("Digite o Número do Vôo \n"); scanf("%d",&novoEndereco->numVoo);
    printf("Digite a Data do Vôo \n"); scanf("%s",&novoEndereco->dataVoo);
    printf("Digite o Horário do Vôo \n"); scanf("%s",&novoEndereco->horaVoo);
    printf("Digite o nome do Aeroporto de Sáida \n"); scanf("%s",&novoEndereco->aeroportoS);
    printf("Digite o nome do Aeroporto de Chegada \n"); scanf("%s",&novoEndereco->aeroportoC);
    printf("Digite a rota a ser feita \n"); scanf("%s",&novoEndereco->rota);
    printf("Digite o Tempo Estimado de Vôo \n"); scanf("%s",&novoEndereco->tempoEstimado);
    printf("Digite o Número de Passageiros \n"); scanf("%d",&novoEndereco->passageiros);
    cadastro *antigoEndereco = conteudo->proximo;
    conteudo->proximo = novoEndereco;
    novoEndereco->proximo = antigoEndereco;
    system("clear");
}

void consultaVoo(cadastro *conteudo){
    int numeroConsulta;
    printf("Digite o Número do Vôo a ser consultado \n"); scanf("%d",&numeroConsulta);
    system("clear");
    cadastro *enderecoTemporario;
    enderecoTemporario = conteudo->proximo;
    enderecoTemporario->numVoo;
    while(enderecoTemporario != NULL){
        if(enderecoTemporario->numVoo == numeroConsulta){
        printf("Número do Vôo: %d \n",enderecoTemporario->numVoo);
        printf("Data do Vôo: %s \n",enderecoTemporario->dataVoo);
        printf("Horário do Vôo: %sh \n",enderecoTemporario->horaVoo);
        printf("Aeroporto de Saída: %s \n",enderecoTemporario->aeroportoS);
        printf("Aeroporto de Chegada: %s \n",enderecoTemporario->aeroportoC);
        printf("Rota: %s \n",enderecoTemporario->rota);
        printf("Tempo Estimado de Vôo: %sh \n",enderecoTemporario->tempoEstimado);
        printf("Número de Passageiros: %d \n",enderecoTemporario->passageiros);
        enderecoTemporario = enderecoTemporario->proximo;
        printf("\n \n");
        menu(conteudo);
        }
    }

}
int main(){
    cadastro *conteudo = (cadastro *) malloc(sizeof(cadastro));
    int operador = 0;
    while(operador == 0){
    menu(conteudo);
    }

    return 0;
}
