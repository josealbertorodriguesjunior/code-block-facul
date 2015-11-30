#include <stdio.h>
#include <stdlib.h>

struct voeBem{
	int numVoo, passageiros;
	char dataVoo[10], horaVoo[10], aeroportoS[15], aeroportoC[15], rota[10], tempoEstimado[10];
	struct Voo *prox;
};
typedef struct voeBem voo;

void removeVoo(voo *LISTA);
int menu(void);
void opcao(voo *LISTA, int op);
voo *criavoo();
void insereFim(voo *LISTA);
void cadastraVoo(voo *LISTA);
void consultaVoo(voo *LISTA);
void libera(voo *LISTA);


int main(void)
{
 	voo *LISTA = (voo *) malloc(sizeof(voo));
	if(!LISTA){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	removeVoo(LISTA);
	int opt;

	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	free(LISTA);
	return 0;
}

void removeVoo(voo *LISTA)
{
	LISTA->prox = NULL;
}

int menu(void)
{
	int opt;
    printf("======= VOE BEM =======");
    printf("\n \n");
	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Cadastrar um novo Vôo\n");
	printf("2. Consultar Vôo\n");
	printf("3. Remover Vôo\n");
	printf("Opcao: "); scanf("%d", &opt);

	return opt;
}

void opcao(voo *LISTA, int op)
{
	switch(op){
		case 0:
			libera(LISTA);
			break;

		case 1:
			cadastraVoo(LISTA);
			break;

		case 2:
			consultaVoo(LISTA);
			break;

		case 3:
			removeVoo(LISTA);
			break;

		default:
			printf("Comando invalido\n\n");
	}
}

int vazia(voo *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}


/*void insereFim(node *LISTA)
{
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	printf("Novo elemento: "); scanf("%d", &novo->num);
	novo->prox = NULL;

	if(vazia(LISTA))
		LISTA->prox=novo;
	else{
		node *tmp = LISTA->prox;

		while(tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = novo;
	}
}*/

void cadastraVoo(voo *LISTA)
{
	voo *novo=(voo *) malloc(sizeof(voo));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	printf("Número do vôo: "); scanf("%d", &novo->numVoo);

	voo *oldHead = LISTA->prox;

	LISTA->prox = novo;
	novo->prox = oldHead;
}

void consultaVoo(voo *LISTA)
{
	if(vazia(LISTA)){
		printf("Não existem cadastros!\n\n");
		return ;
	}
    int numConsulta, aux[30], i=0;
	voo *tmp;
	tmp = LISTA->prox;

	while( tmp != NULL){
		printf("%5d", tmp->numVoo);
		tmp = tmp->prox;
		printf("\n \n");
		aux[i] = tmp;
	}
    printf("Digite o Vôo que deseja consultar: \n");
    scanf("%d",&numConsulta);
    if (aux == numConsulta) {
        printf("Deu Bom ");
    }
}

void libera(voo *LISTA)
{
	if(!vazia(LISTA)){
		voo *proxNode,
			  *atual;

		atual = LISTA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}
