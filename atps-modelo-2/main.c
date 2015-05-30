#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char OPERADOR;
    float VALOR_1;
    float VALOR_2;
    int RESTO;
    int VALOR_B;
    int CONT_FAT;
    float VALOR_FAT;
    int dec=0,num,d=1;
    printf("\t Calculadora \n\t Menu \n\t (1) Soma \n\t (2) Subtração \n\t (3) Multiplicação \n\t (4) Divisão \n\t (5) Exponenciação \n\t (6) Raiz Quadrada \n\t (7) Potenciação \n\t (8) Decimal para Binário \n\t (9) Fatorial \n\t (0) Binário para Decimal\n \t (s) Sair \n\t  \n");
    printf("\tSelecione o Operador desejado: ");
    scanf("\t%s", &OPERADOR);

    printf("\n");

    switch (OPERADOR)
    {
    case '1':
    printf("\tSoma \n \n");
    printf("\tDigite o Primeiro Número: ");
    scanf("%f\t", &VALOR_1);
    printf("\tDigite o Segundo Número: ");
    scanf("\t%f", &VALOR_2);
    printf("\tResultado/: %f",VALOR_1+VALOR_2);
    break;

    case '2':
    printf("\tSubtração \n \n");
    printf("\tDigite o Primeiro Número: ");
    scanf("\t%f", &VALOR_1);
    printf("\tDigite o Segundo Número: ");
    scanf("\t%f", &VALOR_2);
    printf("\tResultado/: %f",VALOR_1-VALOR_2);
    break;

    case '3':
    printf("\tMultiplicação \n \n");
    printf("\tDigite o Primeiro Número: ");
    scanf("\t%f", &VALOR_1);
    printf("\tDigite o Segundo Número: ");
    scanf("\t%f", &VALOR_2);
    printf("\tResultado/: %f",VALOR_1*VALOR_2);
    break;

    case '4':
    printf("\tDivsão \n \n");
    printf("\tDigite o Primeiro Número: ");
    scanf("\t%f", &VALOR_1);
    printf("\tDigite o Segundo Número: ");
    scanf("\t%f", &VALOR_2);
    if (VALOR_2 == 0)
    printf("\n\tLamento, mas não existe divisão por zero!! ");
    else
    printf("\tResultado/: %f",VALOR_1/VALOR_2);
    break;

    case '5':
    printf("\tExponenciação \n \n");
    printf("\tDigite a Base: ");
    scanf("\t%f", &VALOR_1);
    printf("\tDigite o Expoente: ");
    scanf("\t%f", &VALOR_2);
    printf("\tResultado: %f", pow(VALOR_1,VALOR_2));
    break;

    case '6':
    printf("\tRaiz Quadrada \n \n");
    printf("\tDigite o número o qual você deseja saber a Raiz Quadrada: ");
    scanf("\t%f", &VALOR_1);
    printf("\tResultado: %f", sqrt(VALOR_1));
    break;

    case '7':
    printf("\tPorcentagem \n \n");
    printf("\tDigite o número o qual você deseja saber a porcentagem: ");
    scanf("\t%f", &VALOR_1);
    printf("\tDigite o número correspondente à porcentagem que você deseja saber: ");
    scanf("\t%f", &VALOR_2);
    printf("\tResultado: %f", ((VALOR_1/100)*VALOR_2));
    break;

    case '8':
    printf("\n \n");
    printf("\tBinário \n \n ");

    printf("\tDigite o número que você deseja converter ");
    scanf("\t%d", &VALOR_B);

        if (VALOR_B == 1)
        {
            printf("\t%d", VALOR_B);
        }

        else
        {
            do
            {
                RESTO = VALOR_B % 2;
                printf("\t%d", RESTO);
                VALOR_B = VALOR_B / 2;
            } while (VALOR_B >= 1);
        }
    break ;

    case '9':
    printf("\tFatorial \n \n");
    printf("\tDigite o número o qual você deseja realizar o cálculo: ");
    scanf("\t%f", &VALOR_FAT);

    for (CONT_FAT = (VALOR_FAT-1) ; VALOR_FAT > 0 ; CONT_FAT --)
    {
        VALOR_FAT = CONT_FAT*VALOR_FAT;
        printf(" %f \n",VALOR_FAT);
    }
    break;

    case '0' :

    printf("\tDigite o numero binario: ");
    scanf("\t%d",&num);

    do{
        dec = dec+(num%10)*d;
        d = d*2;
        num = num/10;

    }while(num!=0);

    printf("\tO numero em decimal é %d",dec);

    break ;


    case 's':
    printf("\n \n");
    printf("\tVocê Saiu !!!!!");
    break;

    default:
    printf("\tOpcao invalida! \n\n");
    return main();

    }
return 0;
}
