#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int wire, br_l, m, wires, br[100];
    scanf("%i", &wires);
    for (int i = 1; i <= wires; i++)
        scanf("%i", &br[i]);
    scanf("%i", &m);
    while (m--)
    {
        scanf("%i", &wire);
        scanf("%i", &br_l);
        br[wire + 1] += br[wire] - br_l; 
        br[wire - 1] += br_l - 1;
        br[wire] = 0;
    }
    for (int i = 1; i <= wires; i++)
        printf("%i\n", br[i]);
}
