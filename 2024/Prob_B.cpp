#include <stdio.h>
#include <stdlib.h>

int main() {

int Meses [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int M, D;
int quanto = 0;

scanf("%d %d", &D, &M);

    if (M == 12 && D < 25)
        {
            quanto += 25 - D; 
        }
    else if (M == 12 && D > 25)
        {
            quanto += Meses[M - 1] - 25;
            M = 1;
        }
    else
        {
            quanto = Meses[M-1] - D;
        }

    for (int i = M - 1; i < 12; i++)
    {
        if (i == 11)
        {
            break;
        }
        else
        {
        quanto += Meses[i];
        }
    }
    

printf("%d\n", quanto);


}
