#include <stdio.h>
#include <stdlib.h>

struct lista{
    int numVoo, passageiros;
    char dataVoo[10], horaVoo[10], aeroportoS[50], aeroportoC[50], rota[50], tempoEstimado[10];
    struct lista *proximo;
};
struct passagem{
    int numeroPassagem, numeroVoo, portaoDeEmbarque;
    char dataDeEmbarque[15], horarioDeEmbarque[15];
    struct passagem *proximoPassagem;
};

typedef struct lista cadastro;
typedef struct passagem passagens;

int menu (cadastro *conteudo, passagens *listaPassagem){
    int opt;
    printf("VOE BEM \n \n");
	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Cadastrar um Novo Vôo\n");
	printf("2. Consultar Um Vôo\n");
	printf("3. Consultar Lista de Vôos Cadastrados\n");
	printf("4. Remover Um Vôo\n");
	printf("5. Cadastrar uma Nova Passagem\n");
	printf("6. Consultar uma Passagem\n");
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
        case 3:
            exibirVooCadastrado(conteudo);
            break;
        case 4:
            removerVoo(conteudo);
            break;
        case 5:
            cadastrarPassagem(listaPassagem);
            break;
        case 6:
            consultarPassagem(listaPassagem);
            break;
        default:
            printf("OPÇÃO INVÁLIDA \n");
            break;

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

void consultaVoo(cadastro *conteudo, passagens *listaPassagem){
    int numeroConsulta;
    cadastro *enderecoTemporario;
    enderecoTemporario = conteudo->proximo;
    enderecoTemporario->numVoo;
    if (enderecoTemporario == NULL){
        printf("NÃO EXISTEM VÔOS CADASTRADOS \n \n");
    }
    else {
        printf("Digite o Número do Vôo a ser consultado \n"); scanf("%d",&numeroConsulta);
        system("clear");
        while(enderecoTemporario != NULL){
            if(enderecoTemporario->numVoo == numeroConsulta){
                printf("Número do Vôo: %d \n",enderecoTemporario->numVoo);
                printf("Data do Vôo: %s \n",enderecoTemporario->dataVoo);
                printf("Horário do Vôo: %sh \n",enderecoTemporario->horaVoo);
                printf("Aeroporto de Saída: %s \n",enderecoTemporario->aeroportoS);
                printf("Aeroporto de Chegada: %s \n",enderecoTemporario->aeroportoC);
                printf("Rota: %s \n",enderecoTemporario->rota);
                printf("Tempo Estimado de Vôo (Em Horas): %sh \n",enderecoTemporario->tempoEstimado);
                printf("Número de Passageiros: %d \n",enderecoTemporario->passageiros);
                enderecoTemporario = enderecoTemporario->proximo;
                printf("\n \n");
                menu(conteudo, listaPassagem);
            }

        }
    }
}

void exibirVooCadastrado(cadastro *conteudo){
    cadastro *enderecoTemporario;
    enderecoTemporario = conteudo->proximo;
    if (enderecoTemporario == NULL){
        printf("NÃO EXISTEM VÔOS CADASTRADOS! \n \n");
    }
    while(enderecoTemporario != NULL){
            printf("Vôo: %d",enderecoTemporario->numVoo);
            printf("\n");
            enderecoTemporario = enderecoTemporario->proximo;
    }
    printf("\n \n");
}

void removerVoo(cadastro *conteudo){
    int removeVoo;
    cadastro *anterior, *atual;
    if(conteudo->proximo == NULL){
        printf("NÃO HÁ VÔOS A SEREM EXIBIDOS O PROGRAMA FOI ENCERRADO\n");
        exit(1);
        system("pause");
    }
    else{
        printf("Informe o Número do Vôo Que deseja Excluir \n"); scanf("%d",&removeVoo);
        anterior = conteudo->proximo;
        atual = conteudo->proximo;
        while(atual != NULL){
            if(atual->numVoo == removeVoo){
                if(atual == conteudo->proximo){
                    conteudo->proximo = conteudo->proximo->proximo;
                    free(atual);
                    break;
                }

            }
        }
    }
}

void cadastrarPassagem(passagens *listaPassagem){
    passagens *novoEnderecoPassagens = (passagens *) malloc(sizeof(passagens));
    printf("Digite o Número da Passsagem \n"); scanf("%d",&novoEnderecoPassagens->numeroPassagem);
    printf("Digite o Número do Vôo \n"); scanf("%d",&novoEnderecoPassagens->numeroVoo);
    printf("Digite a Data do Embarque \n"); scanf("%s",&novoEnderecoPassagens->dataDeEmbarque);
    printf("Digite o Horário de Embarque \n"); scanf("%s",&novoEnderecoPassagens->horarioDeEmbarque);
    printf("Digite o Número do Portão de Embarque \n"); scanf("%d",&novoEnderecoPassagens->portaoDeEmbarque);
    passagens *antigoEnderecoPassagens = listaPassagem->proximoPassagem;
    listaPassagem->proximoPassagem = novoEnderecoPassagens;
    novoEnderecoPassagens->proximoPassagem = antigoEnderecoPassagens;
    system("clear");
}

void consultarPassagem(passagens *listaPassagem,cadastro *conteudo){
    int numeroConsultaPassagem;
    passagens *enderecoTemporario;
    enderecoTemporario = listaPassagem->proximoPassagem;
    enderecoTemporario->numeroPassagem;

    if (enderecoTemporario == NULL){
        printf("NÃO EXISTEM PASSAGENS CADASTRADAS \n \n");
    }
    else {
        printf("Digite o Número da Passagem a ser consultada \n"); scanf("%d",&numeroConsultaPassagem);
        system("clear");
        while(enderecoTemporario != NULL){
            if(enderecoTemporario->numeroVoo == numeroConsultaPassagem){
                printf("Número da Passagem: %d \n",enderecoTemporario->numeroPassagem);
                printf("Número do Vôo: %d \n",enderecoTemporario->numeroVoo);
                printf("Data de Embarque: %s \n",enderecoTemporario->dataDeEmbarque);
                printf("Horário de Embarque: %sh \n",enderecoTemporario->horarioDeEmbarque);
                printf("Portão de Embarque: %d \n",enderecoTemporario->portaoDeEmbarque);
                enderecoTemporario= enderecoTemporario->proximoPassagem;
                printf("\n \n");
                menu(conteudo, listaPassagem);
            }

        }
    }
}
int main(){
    passagens *listaPassagem = (passagens *) malloc(sizeof(passagens));
    cadastro *conteudo = (cadastro *) malloc(sizeof(cadastro));
    int operador = 0;
    while(operador == 0){
        menu(conteudo, listaPassagem);
    }

    return 0;
}
