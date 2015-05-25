#include <stdio.h>
#include <stdlib.h>

int main()
{

   char nome [100];
   int idade;

   printf("Digite seu nome \n");
   scanf("%s", &nome);

   printf("Digite sua idade \n");
   scanf("%d", &idade);

   if (idade >= 18) {
   printf ("voce é adulto %s", nome);
   }
    else if (idade >=51) {
    printf ("voce  um idoso(a) %s", nome);
    }
     else
        printf("voce é uma criança %s", nome);

    return 0;
}
