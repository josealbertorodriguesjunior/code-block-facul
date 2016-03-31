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

void buscaBinaria(){
    int x,inicio,meio , fim ;
    int num; //número a ser buscado.
    for(x=0;x<RESIDENCIAS;x++)
    {
        vetorResidencias[x].numCasa = x;
        printf("Casa Nº %d\n",vetorResidencias[x].numCasa);
    }
    printf("\nInsira o numero que deseja fazer a busca binaria\n");
    scanf("%d",&num);
    inicio=0;
    fim=RESIDENCIAS;

    if(vetorResidencias[inicio].numCasa == num){
        ("A casa foi encontrada na posição %d do vetor\n",inicio);
    }

    else if(vetorResidencias[fim].numCasa==num){
        printf("A casa foi encontrada na posição %d do vetor\n",fim);
    }
    else{
        while(inicio<fim){
            meio=(inicio+fim)/2; //aqui no caso estou fazendo um typecasting, irei truncar o valor do quociente para pegar somente a parte inteira.
            if ( vetorResidencias[meio].numCasa==num){
                printf("A casa foi encontrada na posição %d do vetor\n",meio);
                break;
            }

            else

            if(num>vetorResidencias[meio].numCasa){
                inicio=meio+1;
            }

            else{
                fim=meio;
            }
        }
    }
    printf("\nPressione uma tecla para sair\n");
    exit(1);
    system("pause");
    fflush(stdin);
}
int main(){
    buscaBinaria();
    return 0;
}
