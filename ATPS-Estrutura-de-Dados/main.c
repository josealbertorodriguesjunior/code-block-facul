#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct estrutura_aviao
    {
    char modelo[100];
    char fabricante[100];
    float passageiros;
    float comprimento;
    float altura;
    float velocidade;
    float altitude;
    char motor[100];
    };

    struct estrutura_aviao AVIAO;

    // Obtendo os dados e Salvando os valores

    printf("CADASTRO DA ESTRUTURA AVIAO \n");

    printf("Digite o modelo do aviao \n");
    scanf("%s",&AVIAO.modelo);

    printf("Digite o nome do fabricante do aviao \n");
    scanf("%s",&AVIAO.fabricante);

    printf("Digite o numero de passageiros do aviao \n");
    scanf("%f",&AVIAO.passageiros);

    printf("Digite o comprimento (em Metros) do aviao \n");
    scanf("%f",&AVIAO.comprimento);

    printf("Digite a altura (em Metros) do aviao \n");
    scanf("%f",&AVIAO.altura);

    printf("Digite a velocidade (em KM) do aviao \n");
    scanf("%f",&AVIAO.velocidade);

    printf("Digite a altitude (em Metros) do aviao \n");
    scanf("%f",&AVIAO.altitude);

    printf("Digite o modelo do motor do aviao \n");
    scanf("%s",&AVIAO.motor);

    printf("\n \n");

    //Exibindo os resultados

    printf("\t Modelo do Aviao: %s \n",AVIAO.modelo);
    printf("\t Fabricante do Aviao: %s \n",AVIAO.fabricante);
    printf("\t Numero de passageiros do Aviao: %.1f \n",AVIAO.passageiros);
    printf("\t Comprimento do Aviao em metros: %.1f \n",AVIAO.comprimento);
    printf("\t Altura do Aviao em metros: %.1f \n",AVIAO.altura);
    printf("\t Velocidade do Aviao em KM: %.1f \n",AVIAO.velocidade);
    printf("\t Altitude do Aviao em metros: %.1f \n",AVIAO.altitude);
    printf("\t Modelo do motor do Aviao: %s \n",AVIAO.motor);

    return 0;
}
