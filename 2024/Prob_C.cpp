#include <stdio.h>
#include <stdlib.h>
#include <algorithm>



int main(){

    int quantos_colg;
    int colegas[2][8];
    int amizade  = 2;
    
    scanf("%d", &quantos_colg);

    for (size_t i = 0; i < quantos_colg; i++)
    {
        scanf("%d", &colegas[0][i]);
    }
    for (size_t i = 0; i < quantos_colg; i++)
    {
        scanf("%d", &colegas[1][i]);
    }

    std::sort(colegas[0], colegas[0] + quantos_colg);
    std::sort(colegas[1], colegas[1] + quantos_colg);


        for (int i = 0; i < quantos_colg; i++){
            if (colegas[0][i] != colegas[0][i + 1]){
                amizade--;
                break;
            } 

        }

        for (int i = 0; i < quantos_colg; i++){
            if (colegas[1][i] == colegas[1][i + 1]){
                amizade--;
                break;
            } 
        }
        
        printf("sex: %d", amizade);

    return 0;
}