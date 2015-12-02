#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("frase.txt","w");
    char frase[100];
    int i;
    for(i=0; i<3; i++){
        printf("Digite uma frase para ser gravada em um arquivo \n");
        scanf("%s",&frase);
        fprintf(arquivo,"%s",frase);
    }
    fclose(arquivo);
    return 0;
}
