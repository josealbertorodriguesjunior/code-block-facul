#include <stdio.h>
#include <stdlib.h>

struct lista{
        int info;
        struct lista *proximo;
    };

    typedef struct lista apelido;
int menu(void){
	int opt;

	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Adicionar elemento\n");
	printf("2. Exibir lista\n");
	printf("Opcao: "); scanf("%d", &opt);

	return opt;
}

void opcao (apelido *CORPO, int operador){
    switch(operador){
        case 0:
            exit(1);
            system("pause");
            break;
        case 1:
            insere(CORPO);
            break;
        case 2:
            exibe(CORPO);
            break;
        default:
            printf("OPÇÃO INVÁLIDA!!!!");
    }
}
void inicia (apelido *CORPO){
    CORPO->proximo = NULL;
}

void insere (apelido *CORPO){
    apelido *novo = (apelido *) malloc(sizeof(apelido));
    printf("Novo Elemento: \n"); scanf("%d",&novo->info);

    apelido *antigo = CORPO->proximo;
    CORPO->proximo = novo;
    novo->proximo = antigo;
}

void exibe(apelido *CORPO){
    apelido *temporario;
    temporario = CORPO->proximo;

    while(temporario != NULL){
        printf("%d",temporario->info);
        printf("\t");
        temporario = temporario->proximo;
    }
    printf("\n \n");
}
int main(){
    apelido *CORPO = (apelido *) malloc(sizeof(apelido));
    int op;

    do{
        op = menu();
        opcao(CORPO,op);
    }while(op);
   return 0;
}
