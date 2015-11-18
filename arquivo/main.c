#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq;
    arq = fopen("arq.txt","rw");
    char frase[100];
    int i;
    while(fgets(frase,100,arq)!= NULL) {
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

        }
        printf("%s",frase);
    }
    fclose(arq);
    return 0;
}
