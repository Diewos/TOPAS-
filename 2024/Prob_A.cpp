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


    if (hrs[2] >= hrs[0] && hrs[2] <= hrs[1] )
    {
        printf("Encontram-se");
    }
    else
    {
        printf("Desencontram-se");
    }

    system("PAUSE");
    
    return 0;
}