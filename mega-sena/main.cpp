#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <locale.h>

using namespace std;
const int bolasSorteadas=6;
const int totalBolas=60;

bool menu(int &);
void sorteio(int []);
void testarAleatorio(int [],int,int &);
void ordemCrescente(int []);
void jogoUsuario(int []);
int conferirResultado(int [],int []);

int main()
{
    setlocale(LC_ALL,"portuguese");
    system("title MEGASENA");


    int sorteioAleatorio[bolasSorteadas]{NULL};
    int usuario[bolasSorteadas]{NULL};
    bool operacao=true;
    int  escolha=NULL;
    int  resultado=NULL;

    sorteio(sorteioAleatorio);
    ordemCrescente(sorteioAleatorio);
    while(operacao==true){
        operacao=menu(escolha);
        switch(escolha){
            case 1:
                //FAZER JOGO
                jogoUsuario(usuario);
            break;
            case 2:
                //CONFERIR RESULTADO
                cout<<"\tSorteio     : ";
                for(int contador=0;contador<bolasSorteadas;contador++){printf(" %.2d",sorteioAleatorio[contador]);};
                cout<<endl;
                system("pause");
            break;
        }
    }

    cout<<"\n\t\tRESULTADO"<<endl;
    cout<<"\n\tJogo usuário: ";
        for(int contador=0;contador<bolasSorteadas;contador++){printf(" %.2d",usuario[contador]);};
    cout<<endl;
    cout<<"\tSorteio     : ";
        for(int contador=0;contador<bolasSorteadas;contador++){printf(" %.2d",sorteioAleatorio[contador]);};
    cout<<endl;
    resultado=conferirResultado(sorteioAleatorio,usuario);
    if(resultado>=6){
                     cout<<"\n\tVOCÊ ACABA DE GANHAR NA MEGA SENA 2016"<<endl;
                     cout<<"\t\tPARABÉNS"<<endl;
                     cout<<"\n\tNúmeros da sorte: ";
                     for(int contador=0;contador<bolasSorteadas;contador++){
                        printf("%d ", sorteioAleatorio[contador]);
                     }

                     }
    cout<<"\n\tAcertos     :  "<<resultado<<endl;


    return 0;
}
bool menu(int &escolhaUsuario){
    system("cls");
    cout<<"\n\t\tMEGA SENA 2015"<<endl;
    cout<<"\n\t[1] - FAZER JOGO";
    cout<<"\n\t[2] - CONFERIR RESULTADO";
    cout<<"\n\t[0] - SAIR/RESULTADO";
    cout<<"\n\n\tOpção: ";
    cin>>escolhaUsuario;
    if(escolhaUsuario==0){return false;}else{ return true;}

}
void sorteio(int aleatorio[bolasSorteadas]){

    int temp=0;
    srand(time(NULL));

    for(int contador=0;contador<bolasSorteadas;contador++){
        temp= rand()%totalBolas;
        if(temp==0){
                contador--;
        }else{
            testarAleatorio(aleatorio,temp,contador);
        }
    }


}
void testarAleatorio(int vetorAleatorio[],int numero,int &x){
    bool aux=false;
    int teste=0;
       while(aux!=true){
            for(int contador=0;contador<bolasSorteadas;contador++){//trazendo o numero para comparação;
                if(numero==vetorAleatorio[contador]){
                    aux=false;
                    teste=0;
                    numero=rand()%totalBolas;
                    break;
                }else if(numero<=0 || numero>totalBolas){
                    aux=false;
                    teste=0;
                    numero=rand()%totalBolas;
                    break;
                }else{
                    teste++;
                    if(teste==bolasSorteadas){
                        if(numero==0){
                            aux=false;
                            break;
                        }
                        aux=true;
                        break;
                    }
                }
            }

        }
        vetorAleatorio[x]=numero;

}
void ordemCrescente(int arrumarOrdem[]){
    int temp=0;

    for(int auxSorteio=0;auxSorteio<bolasSorteadas;auxSorteio++){
        for(int aux=auxSorteio+1;aux<bolasSorteadas;aux++){
            if(arrumarOrdem[auxSorteio]>arrumarOrdem[aux]){
                temp= arrumarOrdem[auxSorteio];
                arrumarOrdem[auxSorteio]=arrumarOrdem[aux];
                arrumarOrdem[aux]=temp;
            }
        }
    }
}
void jogoUsuario(int vetorUsuario[]){
    int temp;
    cout<<"\n\tMEGA SENA - JOGO CLIENTE"<<endl;

        for(int contador=0;contador<bolasSorteadas;contador++){
            printf("\n\t\t%.2d Bola: ",contador+1);
            cin>>temp;
            while(temp<=0){
                cout<<"\n\tNúmero menor ou igual a 0!"<<endl
                    <<"\tDigite um número: ";
                cin>>temp;
            }
            for(int contadorAux=0;contadorAux<bolasSorteadas;contadorAux++){
                if(temp==vetorUsuario[contadorAux]){
                        cout<<"\n\t\tNúmero já digitado!"<<endl;
                        contador--;
                        break;}
            }
            vetorUsuario[contador]=temp;
        }

    ordemCrescente(vetorUsuario);

}
int conferirResultado(int vetorAleatorio[],int vetorUsuario[]){
    int acertos=NULL;
    for(int contador=0;contador<bolasSorteadas;contador++){
        for(int contadorAux=0;contadorAux<bolasSorteadas;contadorAux++){
            if(vetorUsuario[contador]==vetorAleatorio[contadorAux]){acertos++;}
        }
    }
    return acertos;
}
