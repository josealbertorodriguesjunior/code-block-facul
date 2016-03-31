#include <stdio.h>
#include <stdlib.h>
#define RESIDENCIAS 1000

struct Residencia{
        char rua[25];
        int numCasa;
        int numMedidor;
        float medidaConsumo;
    };
    struct Residencia vetorResidencias[RESIDENCIAS];

void pesquisaLinear(busca, achou, continua){
    int i;
    printf("Digite o número da Casa que deseja encontrar\n");
    scanf("%d",&busca);
    for(i=0; i<RESIDENCIAS;i++){
        if(vetorResidencias[i].numCasa == busca){
                printf("Casa Encontrada na posição %d do vetor, correspondendo à casa N°:%d \n\n",i,vetorResidencias[i].numCasa);
        }
    }
    printf("Deseja Continuar Pesquisando? 0-Não 1-Sim \n\n");
    scanf("%d",&continua);
    switch(continua){
        case 1:
            pesquisaLinear();
            break;
        case 0:
            exit(1);
            system("pause");
            break;
    }
}
int main(){
    int i, k, low, high, busca, continua;
    char achou;
    double d;

    for(i=0; i<RESIDENCIAS; i++){
        d = (double) rand () / ((double) RAND_MAX + 1);
        k = d * (high - low + 1);
        vetorResidencias[i].numCasa = low + k;
        printf("Casa N°: %d \n",vetorResidencias[i].numCasa);
    }
    pesquisaLinear(busca, achou, continua);
}
