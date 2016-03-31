#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("intervalo da rand: [%d]\n", RAND_MAX);

    for(i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n",i, rand());
    return 0;
}
