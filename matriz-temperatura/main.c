#include <stdio.h>

int main()
{
    int matriz[4][4];
    int linha, coluna;

    //escrevendo na Matriz
    for(linha = 0 ; linha < 4 ; linha++)
        for(coluna = 0 ; coluna < 4 ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }

    // imprimindo a matriz na tela
    for(linha = 0 ; linha < 4 ; linha++)
    {
        for(coluna = 0 ; coluna < 4 ; coluna++)
            printf("%3d", matriz[linha][coluna]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
}
