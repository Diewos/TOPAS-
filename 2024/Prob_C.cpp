#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

void sort(){

};

int main(){

    int quantos_colg;
    int colegas[2][8];
    int amizade  = 0;
    
    scanf("%d", &quantos_colg);

    for (size_t i = 0; i < quantos_colg; i++)
    {
        scanf("%d", &colegas[0][i]);
    }
    for (size_t i = 0; i < quantos_colg; i++)
    {
        scanf("%d", &colegas[1][i]);
    }
    

    for (int i = 0; i < quantos_colg - 1; i++){
        int temp;
        if (colegas [0][i] > colegas[0][i+1])
        {
            colegas[0][i] = temp;
            colegas[0][i] = colegas[0][i+1];
            colegas[0][i+1] = temp;
        }
    }
    for (int i = 0; i < quantos_colg - 1; i++){
        int temp;
        if (colegas [1][i] > colegas[1][i+1])
        {
            colegas[1][i] = temp;
            colegas[1][i] = colegas[1][i+1];
            colegas[1][i+1] = temp;
        }
    }

        for (int i = 0; i < quantos_colg - 1; i++){
            if (colegas[0][i] == colegas[0][i + 1]){
                amizade++;
                break;
            } 
        }

        amizade++;

        for (int i = 0; i < quantos_colg - 1; i++){
            printf("%d\n", colegas[1][i]);
            if (colegas[1][i] == colegas[1][i + 1]){
                amizade--;
                break;
            } 
        }
        
        printf("%d", amizade);

    return 0;
}