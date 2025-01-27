#include <stdio.h>
#include <stdlib.h>

int main(){

    int quantos_colg;
    int colegas[2][8];
    
    scanf("%d", &quantos_colg);

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < quantos_colg; j++)
        {
            scanf("%d", &colegas[i][j]);
        }
    }




    return 0;
}