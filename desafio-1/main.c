#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    FILE *file;
    file = fopen("desafio.txt","r");
    char frase[100];
    int i;
    /*printf("Digite uma frase: \n");
    scanf("%s",&frase);
    for (i=0; i<strlen(frase); i++) {
        if (frase[i] == 'a'|| frase[i] == 'A') {
            frase[i] = 'x';
        }
            if (frase[i] == 'e'|| frase[i] == 'E') {
                frase[i] = 'x';
            }
                if (frase[i] == 'i'|| frase[i] == 'I') {
                    frase[i] = 'x';
                }
                    if (frase[i] == 'o'|| frase[i] == 'O') {
                        frase[i] = 'x';
                    }
                        if (frase[i] == 'u'|| frase[i] == 'U') {
                            frase[i] = 'x';
                        }
    }*/
    (frase = fgetc(file);
    return 0;
}
