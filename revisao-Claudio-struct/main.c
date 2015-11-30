#include <stdio.h>
#include <stdlib.h>

int main(){
        struct Cadastro{
        char nome[100], sexo, estadoCivil;
        int idade;
    };
    int i;
    struct Cadastro cadastra;
    for(i=0;i<2;i++){
        cadastra.nome[i] = malloc(sizeof(int));
        printf("Digite Seu Nome\n");
        scanf("%s",&cadastra.nome[i]);
    }
    printf("%s",cadastra.nome);
    return 0;
}
