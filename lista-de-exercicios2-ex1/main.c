#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_prod [100];
    char cod_prod [100];
    float val_normal;
    float val_desc;
    float val_acres;
    float total_desc;
    float total_acres;

    printf("Digite o Nome do produto: \n");
    scanf("%s", &nome_prod);
    printf("Digite o Código do produto: \n");
    scanf("%s", &cod_prod);
    printf("Digite o Valor do produto: \n");
    scanf("%f", &val_normal);
    val_desc = (val_normal/100)*10;
    val_acres = (val_normal/100)*20;
    total_desc = val_normal - val_desc;
    total_acres = val_normal + val_acres;
    printf("Nome do produto: %s \n" , nome_prod);
    printf("Código do produto: %s \n" , cod_prod);
    printf("Valor do produto: R$ %f \n" , val_normal);
    printf("Valor do produto com 10 por cento desconto: R$ %f \n" , total_desc);
    printf("Valor do produto com 20 por cento de acréscimo: R$ %f \n" , total_acres);

    return 0;
}
