#include <stdio.h>
#include <stdlib.h>

int main()
{   char OPERADOR; // Variável que funciona para a seleção das opções
    float VALOR_1; // Variável que armazena o primeiro valor digitado
    float VALOR_2; // Variável que armazena o segundo valor digitado
    float RESULTADO; // Variável que armazena o resultado (No caso da operação porcentagem)


        printf("Calculadora \n Opções de operações disponíveis \n (1) SOMA \n (2) SUBTRAÇÃO \n (3) MULTIPLICAÇÃO \n (4) DIVISÃO \n (5) EXPONENCIAÇÃO \n (6) RAIZ QUADRADA \n (7) PORCENTAGEM \n (8) SAIR \n"); //Exibe as operações disponíveis
        printf("Digite a Opção desejada: \n"); //Exibe uma mensagem solicitando a operação desejada
        scanf("%c" , &OPERADOR); // Lê e atribui a devida operação à variável OPERADOR

       system("cls || clear"); //Limpa a tela

    if (OPERADOR != '+' && '-' && '*' && '/' && 'e' && 'r' && 'p' && 's')
    {
        printf("Erro");

    }


        /*else if (OPERADOR == 'e') // Estrutura de condição que verifica se a mesma é verdadeira de acordo com o dado inserido pelo usuário
        {
            printf("Digite a base da exponenciação \n");
            scanf("%f", &VALOR_1);
            printf("Digite o expoente \n");
            scanf("%f", &VALOR_2);
            printf("Resultado : %f", pow(VALOR_1 , VALOR_2)); // Realiza a operação de Exponenciação e mostra o resultado na tela
        }


           else if (OPERADOR == 'r') // Estrutura de condição que verifica se a mesma é verdadeira de acordo com o dado inserido pelo usuário
            {
            printf("Digite o número o qual você deseja saber a raiz quadrada\n");
            scanf("%f", &VALOR_1);
            printf("Resultado : %f", sqrt(VALOR_1)); // Realiza a operação de Raiz quadrada e mostra o resultado na tela

            }

               else if (OPERADOR == 'p') // Estrutura de condição que verifica se a mesma é verdadeira de acordo com o dado inserido pelo usuário
                {
                    printf("Digite o número o qual você deseja saber a porcentagem \n");
                    scanf("%f", &VALOR_1);
                    printf("Digite qual a porcentagem que você deseja saber deste número \n");
                    scanf("%f", &VALOR_2);
                    RESULTADO = VALOR_1 - ((VALOR_1/100) * VALOR_2); // Realiza a operação de Porcentagem e atribui o resultado à variável RESULTADO
                    printf("Resultado %f", RESULTADO); // Mostra o resultado na tela

                }
                    else if (OPERADOR == 's') // Estrutura de condição que verifica se a mesma é verdadeira de acordo com o dado inserido pelo usuário
                    {
                        printf("Você Saiu"); // Exibe a mensagem de sáida

                    } */
                        else//Estrutura de condição para o caso de que todas as condições acima não se satisfaçam, ou sejam falsas

                            printf("Digite o primeiro número \n");
                            scanf("%f", &VALOR_1);
                            printf("Digite o segundo número \n");
                            scanf("%f", &VALOR_2);


            switch (OPERADOR) // Estrutura de seleção
            {

            case '+': // Caso na variável OPERADOR esteja a String '1'
            printf("Resultado : %f", VALOR_1 + VALOR_2);
            break;

            case '-': // Caso na variável OPERADOR esteja a String '2'
            printf("Resultado : %f", VALOR_1 - VALOR_2);
            break;

            case '*': // Caso na variável OPERADOR esteja a String '3'
            printf("Resultado : %f", VALOR_1 * VALOR_2);
            break;

            case '/': // Caso na variável OPERADOR esteja a String '4'
                if (VALOR_2 == 0) // Estrutura de condição para verificar se o dividendo da Operação divisão é igual a zero
                {
                    printf("Não existe divisão por zero");
                    break;
                }
                else // Estrutura de condição para o caso da condição acima não se satisfaça ou seja falsa
                {
                printf("Resultado : %f", VALOR_1 / VALOR_2);
                break;
                }

            case 'e':
            printf("Digite a base da exponenciação \n");
            scanf("%f", &VALOR_1);
            printf("Digite o expoente \n");
            scanf("%f", &VALOR_2);
            printf("Resultado : %f", pow(VALOR_1 , VALOR_2)); // Realiza a operação de Exponenciação e mostra o resultado na tela
            break;

            case 'r':
            printf("Digite o número o qual você deseja saber a raiz quadrada\n");
            scanf("%f", &VALOR_1);
            printf("Resultado : %f", sqrt(VALOR_1)); // Realiza a operação de Raiz quadrada e mostra o resultado na tela
            break;

            case 'p':
            printf("Digite o número o qual você deseja saber a porcentagem \n");
            scanf("%f", &VALOR_1);
            printf("Digite qual a porcentagem que você deseja saber deste número \n");
            scanf("%f", &VALOR_2);
            RESULTADO = VALOR_1 - ((VALOR_1/100) * VALOR_2); // Realiza a operação de Porcentagem e atribui o resultado à variável RESULTADO
            printf("Resultado %f", RESULTADO); // Mostra o resultado na tela
            break;

            case 's':
            printf("Você Saiu"); // Exibe a mensagem de sáida
            break;

            }



    return 0; // Retorna 0
}
