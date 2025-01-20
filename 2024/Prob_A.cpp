#include <stdio.h>
#include <stdlib.h>

const int num_inputs = 3;
int hrs[num_inputs];
int mins[num_inputs];
int total[num_inputs];


int main(){
    for (size_t i = 0; i < num_inputs; i++)
    {
        scanf("%d %d", &hrs[i], &mins[i]);
    }

    for (size_t i = 0; i < num_inputs; i++)
    {
         total[i] = hrs[i] * 60;
         total[i] = total[i] + mins[i];
    }


    if (total[2] >= total[0] && total[2] <= total[1])
    {
        printf("Encontram-se\n");
    }
    else
    {
        printf("Desencontram-se\n");
    }

    system("PAUSE");
    
    return 0;
}