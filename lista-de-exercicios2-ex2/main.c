#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int bit;
    int byte;
    float kilobyte;
    float megabyte;
    float gigabyte;
    float terabyte;

    printf("Digite um número: \n");
    scanf("%d" , &numero);

    bit = 1 ;
    byte = (8 * bit) ;
    kilobyte = (1024 * byte) ;
    megabyte = (1024 * kilobyte) ;
    gigabyte = (1024 * megabyte) ;
    terabyte = (1024 * gigabyte) ;

    printf("O número que você digitou: %d \n" , numero);
    printf("O mesmo número em bits: %d \n" , bit * numero);
    printf("O mesmo número em bytes: %d \n" , byte * numero);
    printf("O mesmo número em kilobytes: %f \n" , kilobyte * numero);
    printf("O mesmo número em megabytes: %f \n" , megabyte * numero);
    printf("O mesmo número em gigabytes: %f \n" , gigabyte * numero);
    printf("O mesmo número em terabytes: %f \n" , terabyte * numero);

    return 0;
}
