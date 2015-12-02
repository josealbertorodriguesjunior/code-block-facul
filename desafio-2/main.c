#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, qtd_cadastro;

    printf("Digite a Quantidade de Cadastros que você deseja realizar \n");
    scanf("%d",&qtd_cadastro);
    for (i = 0; i < qtd_cadastro; i++){
    printf("Hello world!\n");
    }
    return 0;
}
