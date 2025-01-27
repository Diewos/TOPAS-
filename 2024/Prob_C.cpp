#include <stdio.h>
#include <stdlib.h>

int main(){

    int quantos_colg;
    int colegas[8][8];
    
    scanf("%d", quantos_colg);

    for (size_t i = 0; i < quantos_colg; i++)
    {
        scanf("%d", &colegas[i]);
    }

    for (size_t i = 0; i < quantos_colg; i++)
    {
        printf("%d ", colegas[i]);
    }
        



    return 0;
}